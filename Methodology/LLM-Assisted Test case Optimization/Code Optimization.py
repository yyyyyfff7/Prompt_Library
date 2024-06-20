import os
import shutil
import openai
import pandas as pd
import time

# Set your OpenAI API key
openai.api_key = 'sk-xxxxxxxxxxxxxxx'
openai.api_base = "xxxxxxxxxxxxxxxxxx"

# Define paths
share_path = "/mnt/hgfs/VM_share/inst/"
test_path = "/home/autumn/Desktop/openc910/smart_run/tests/cases/test1/test1.c"
data_path = "/home/autumn/Desktop/openc910/smart_run/work/data.pat"
inst_path = "/home/autumn/Desktop/openc910/smart_run/work/inst.pat"
obj_path = "/home/autumn/Desktop/openc910/smart_run/work/test1.obj"
log_path = "/home/autumn/Desktop/openc910/smart_run/work/test1_build.case.log"
output_base = "/home/autumn/Desktop/testoutputs/"
log_output_path = "/home/autumn/Desktop/testoutputs/prompt_response_log.txt"
failed_tests_path = "/home/autumn/Desktop/testoutputs/failed_tests.txt"

# Read Excel file
try:
    excel_path = 'Instructions.xlsx'  # Replace with your Excel file path
    df = pd.read_excel(excel_path, engine='openpyxl')
except FileNotFoundError:
    print("Excel file not found.")
    df = pd.DataFrame()

# Define function to call API
def call_api_and_save(test_file, log_file, test_path, prompt):
    with open(test_file, 'r') as file1, open(log_file, 'r') as file2:
        file1_content = file1.read()
        file2_content = file2.read()

    # Call the OpenAI API
    try:
        response = openai.Completion.create(
            model="gpt-4",
            messages=[
                {"role": "system", "content": "You are a helpful assistant that generates C code."},
                {"role": "user", "content": prompt},
            ]
        )
        generated_c_code = response['choices'][0]['message']['content']

        with open(test_path, 'w') as output_file:
            output_file.write(generated_c_code)

        # Print and save prompt and response
        print(f"Prompt:\n{prompt}")
        print(f"Response:\n{generated_c_code}")

        os.makedirs(os.path.dirname(log_output_path), exist_ok=True)
        with open(log_output_path, 'a') as log_file:
            log_file.write(f"Prompt:\n{prompt}\n")
            log_file.write(f"Response:\n{generated_c_code}\n")
            log_file.write("="*80 + "\n")

        return True
    except Exception as e:
        print(f"Error calling OpenAI API: {e}")
        return False

# Define function to process each test folder
def process_test_folder(folder_name, c_file_path, max_retries=3):
    test_name = os.path.splitext(os.path.basename(c_file_path))[0]
    test_output_folder = os.path.join(output_base, test_name)

    for attempt in range(max_retries):
        shutil.copy(c_file_path, test_path)
        os.system('make buildcase CASE=test1')
        if os.path.exists(data_path) and os.path.exists(inst_path):
            os.makedirs(test_output_folder, exist_ok=True)
            shutil.copy(data_path, test_output_folder)
            shutil.copy(inst_path, test_output_folder)
            shutil.copy(obj_path, test_output_folder)
            shutil.copy(test_path, os.path.join(test_output_folder, f"{test_name}.c"))
            print(f"Test case {test_name} processed, output to {test_output_folder}")
            return True
        else:
            with open(c_file_path, 'r') as file1, open(log_path, 'r') as file2:
                file1_content = file1.read()
                file2_content = file2.read()

            print(f"Processing test case: {test_name}")
            if test_name.startswith("test") and test_name[4:].isdigit():
                print(f"Test case {test_name} matched instruction prompt criteria.")
                # Use the new prompt with instructions
                instruction_index = int(test_name[4:])
                if instruction_index < len(df):
                    instruction_row = df.iloc[instruction_index]
                    instruction_code = instruction_row.iloc[0]
                    instruction_name = instruction_row.iloc[1] if len(instruction_row) > 1 else ""
                    instruction_syntax = instruction_row.iloc[2] if len(instruction_row) > 2 else ""
                    print(f"Using instruction: {instruction_code}")

                    prompt = f"""
                    There are the following problems in the compilation of my program, please help to modify the program according to the error. Note that your answer will be directly used in the compilation, please make sure that the answer is only a complete program. No explanation or explanation is needed.

                    Test File:
                    {file1_content}

                    Log File:
                    {file2_content}

                    Instruction: {instruction_code}
                    Instruction name: {instruction_name}
                    Instruction syntax: {instruction_syntax}
                    """
                else:
                    print(f"Instruction index {instruction_index} out of range.")
                    prompt = f"""
                    There are the following problems in the compilation of my program, please help to modify the program according to the error. Note that your answer will be directly used in the compilation, please make sure that the answer is only a complete program. No explanation or explanation is needed.

                    Test File:
                    {file1_content}

                    Log File:
                    {file2_content}
                    """
            else:
                print(f"Test case {test_name} did not match instruction prompt criteria.")
                # Use the existing prompt
                prompt = f"""
                There are the following problems in the compilation of my program, please help to modify the program according to the error. Note that your answer will be directly used in the compilation, please make sure that the answer is only a complete program. No explanation or explanation is needed.

                Test File:
                {file1_content}

                Log File:
                {file2_content}
                """

            if not call_api_and_save(test_path, log_path, test_path, prompt):
                print(f"API call failed: {test_name}")
                time.sleep(15)

    os.makedirs(os.path.dirname(failed_tests_path), exist_ok=True)
    with open(failed_tests_path, 'a') as failed_file:
        failed_file.write(f"{test_name}\n")
    return False

# Recursively process folders to find .c files
def process_folders(base_path):
    for root, dirs, files in os.walk(base_path):
        for file_name in files:
            if file_name.endswith('.c'):
                folder_name = os.path.relpath(root, base_path)
                c_file_path = os.path.join(root, file_name)
                if process_test_folder(folder_name, c_file_path):
                    continue
                else:
                    print(f"Test case {folder_name} failed, exceeded max retries")

# Start processing from the share path
if __name__ == "__main__":
    print(f"Start traversing the {share_path} directory")
    if os.path.exists(share_path):
        print(f"{share_path} directory exists")
        print(f"Contents of {share_path}: {os.listdir(share_path)}")
        process_folders(share_path)
    else:
        print(f"{share_path} directory does not exist")
    print("All folders processed")

