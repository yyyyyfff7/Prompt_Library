import openai
import os

# Set your OpenAI API key from an environment variable
openai.api_key = 'xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx'
openai.api_base = "xxxxxxxxxxxxxxxxxxxxxxxxxxx"

# Ensure the API key is set
if openai.api_key is None:
    raise ValueError("OpenAI API key not found. Please set the 'OPENAI_API_KEY' environment variable.")

# Define a function to generate a response based on the file name and content
def generate_response(unit, structure):
    prompt = f"""
    I have designed a processor based on the RV64GC architecture. Now, I need your assistance in writing some C programs to verify its functionality. There is {unit}, the following is its structure, what characteristics of the program can verify {unit}?
    {structure}
    Please generate at least ten features of the program that do not duplicate.
    """

    response = openai.ChatCompletion.create(
        model="gpt-4",  # Use GPT-4 model
        messages=[
            {"role": "system", "content": "You are a helpful assistant that generates characteristics of program."},
            {"role": "user", "content": prompt},
        ]
    )

    generated_response = response['choices'][0]['message']['content']

    return generated_response

# Specify the directory containing the text files
input_directory = 'Module'  # Replace with your input directory
output_directory = 'Characteristic'  # Replace with your output directory

# Create the output directory if it doesn't exist
os.makedirs(output_directory, exist_ok=True)

# Loop over each text file in the directory
for filename in os.listdir(input_directory):
    if filename.endswith('.txt'):
        file_path = os.path.join(input_directory, filename)

        # Read the content of the text file
        with open(file_path, 'r', encoding='utf-8') as file:
            structure = file.read().strip()

        # Generate the response using the OpenAI API
        unit = filename.replace('.txt', '')  # Use the filename without the .txt extension as the unit
        try:
            generated_response = generate_response(unit, structure)
        except Exception as e:
            print(f"Error generating response for {filename}: {e}")
            continue

        # Define the path for the output file
        output_file_name = f"{unit}_characteristic.txt"
        output_file_path = os.path.join(output_directory, output_file_name)

        # Save the generated response to a text file
        try:
            with open(output_file_path, 'w', encoding='utf-8') as file:
                file.write(generated_response)
            print(f"Generated response saved to: {output_file_path}")
        except IOError as e:
            print(f"Error writing to file {output_file_path}: {e}")

        # Optionally, print the response to the console
        # print(generated_response)
