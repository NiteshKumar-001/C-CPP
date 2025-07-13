#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input_file, *output_file;
    char input_filename[] = "input.txt";
    char output_filename[] = "output.txt";
    char ch;

    // Open the input file for reading
    input_file = fopen(input_filename, "r");
    if (input_file == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    // Open the output file for writing
    output_file = fopen(output_filename, "w");
    if (output_file == NULL) {
        printf("Error opening output file.\n");
        fclose(input_file);
        return 1;
    }

    // Read characters from input file, convert to uppercase, and write to output file
    while ((ch = fgetc(input_file)) != EOF) {
        // Convert lowercase letters to uppercase
        if (islower(ch)) {
            ch = toupper(ch);
        }
        // Write the character to the output file
        fputc(ch, output_file);
    }

    // Close the input and output files
    fclose(input_file);
    fclose(output_file);

    printf("File successfully processed and converted to uppercase.\n");

    return 0;
}
