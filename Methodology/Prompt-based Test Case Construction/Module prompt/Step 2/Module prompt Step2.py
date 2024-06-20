import openai
import os

openai.api_key = 'sk-6WeKYTRWvNwtZUqF428d0a948d764760941c56B44b3e3503'
openai.api_base = "https://api.gpts.vin/v1"

# Ensure the API key is set
if openai.api_key is None:
    raise ValueError("OpenAI API key not found. Please set the 'OPENAI_API_KEY' environment variable.")

# Read the rule from the rule.txt file
with open('rule.txt', 'r', encoding='utf-8') as file:
    rule = file.read().strip()


# Define a function to generate a response based on the rule and characteristic
def generate_response(rule, characteristic):
    prompt = f"""
    Please help me write a C program that contains the following features.
    Rule: {rule}
    Characteristic: {characteristic}
    Please write a complete program to ensure that the program can be directly compiled and run, and the output results only need to have a C program, without any explanation.
    """

    response = openai.ChatCompletion.create(
        model="gpt-4",  # Use GPT-4 model
        messages=[
            {"role": "system", "content": "You are a helpful assistant that generates C program."},
            {"role": "user", "content": prompt},
        ]
    )

    generated_response = response['choices'][0]['message']['content']

    # Log the conversation
    log_entry = f"PROMPT:\n{prompt}\n\nRESPONSE:\n{generated_response}\n\n{'-' * 80}\n"
    with open('conversation_log.txt', 'a', encoding='utf-8') as log_file:
        log_file.write(log_entry)

    return generated_response


# Function to process all .txt files in a directory and its subdirectories
def process_directory(input_directory, output_directory):
    # Loop over each file and directory in the input directory
    for root, _, files in os.walk(input_directory):
        for filename in files:
            if filename.endswith('.txt'):
                file_path = os.path.join(root, filename)

                # Read the content of the text file
                with open(file_path, 'r', encoding='utf-8') as file:
                    characteristic = file.read().strip()

                # Generate the response using the OpenAI API
                try:
                    generated_response = generate_response(rule, characteristic)
                except Exception as e:
                    print(f"Error generating response for {filename}: {e}")
                    continue

                # Define the path for the output file
                relative_path = os.path.relpath(file_path, input_directory)
                output_file_path = os.path.join(output_directory, relative_path).replace('.txt', '.c')
                output_file_directory = os.path.dirname(output_file_path)

                # Create the output directory if it doesn't exist
                os.makedirs(output_file_directory, exist_ok=True)

                # Save the generated response to a text file
                try:
                    with open(output_file_path, 'w', encoding='utf-8') as file:
                        file.write(generated_response)
                    print(f"Generated response saved to: {output_file_path}")
                except IOError as e:
                    print(f"Error writing to file {output_file_path}: {e}")


# Specify the directory containing the text files
input_directory = 'characteristic'  # Replace with your input directory
output_directory = 'tests'  # Replace with your output directory

# Process the directory
process_directory(input_directory, output_directory)
