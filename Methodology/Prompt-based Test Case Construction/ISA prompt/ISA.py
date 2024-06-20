import openai
import time
import pandas as pd
import os

openai.api_key = 'sk-xxxxxxxxxxxxxxxxxxxxxxxxxxxx'
openai.api_base = "xxxxxxxxxxxxxxxxxxxxxxxxxxxx"


# Define a function to generate C code for a set of instructions
def generate_c_code(instruction_code, instruction_name, instruction_syntax, rule, log_file):
    prompt = f"""
    Please help me write an inline assembly C program with the following RISC-V instructions:
    Rule: {rule}
    Instruction: {instruction_code}
    Instruction name: {instruction_name}
    Instruction syntax: {instruction_syntax}

    Please write a complete program to ensure that the program can be directly compiled and run, and the output results only need to have a C program, without any explanation.
    """

    response = openai.ChatCompletion.create(
        model="gpt-4",  # Use GPT-4 model
        messages=[
            {"role": "system", "content": "You are a helpful assistant that generates C code."},
            {"role": "user", "content": prompt},
        ]
    )

    generated_c_code = response['choices'][0]['message']['content']

    # Log the conversation
    with open(log_file, 'a', encoding='utf-8') as log:
        log.write(f"Prompt:\n{prompt}\n\nResponse:\n{generated_c_code}\n{'-' * 50}\n\n")

    return generated_c_code


# Load the rule from a text file
try:
    with open('Rule_based_prompt.txt', 'r', encoding='utf-8') as file:
        rule = file.read().strip()
except FileNotFoundError:
    print("Rule file not found.")
    rule = ""

# Load the Excel file and generate C code for each row
try:
    excel_path = 'Instructions.xlsx'  # Replace with your Excel file path
    df = pd.read_excel(excel_path)
except FileNotFoundError:
    print("Excel file not found.")
    df = pd.DataFrame()

# Specify the directory where the text files will be saved
output_directory = 'out_tests'  # Replace with your desired path
os.makedirs(output_directory, exist_ok=True)

# Define the log file path
log_file = os.path.join(output_directory, 'conversation_log.txt')

# Loop over each row and generate C code using the API
start_index = 0  # Start from the first row (index 0)
for index, row in df.iterrows():
    if index < start_index:
        continue

    # Extract the first three columns for the current row
    instruction_code = row.iloc[0]
    instruction_name = row.iloc[1] if len(row) > 1 else ""
    instruction_syntax = row.iloc[2] if len(row) > 2 else ""

    # Generate the C code using the OpenAI API
    try:
        generated_c_code = generate_c_code(instruction_code, instruction_name, instruction_syntax, rule, log_file)
    except Exception as e:
        print(f"Error generating C code for row {index}: {e}")
        continue

    # Define the path for the output file
    file_name = f"test_{index}.c"
    file_path = os.path.join(output_directory, file_name)

    # Save the generated code to a text file
    try:
        with open(file_path, 'w', encoding='utf-8') as file:
            file.write(generated_c_code)
        print(f"Generated code saved to: {file_path}")
    except IOError as e:
        print(f"Error writing to file {file_path}: {e}")

    time.sleep(15)  # Wait for 15 seconds
