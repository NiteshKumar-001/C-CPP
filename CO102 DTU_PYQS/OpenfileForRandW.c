#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char inputFileName[] = "input.txt";
    char outputFileName[] = "output.txt";
    char ch;

    // Open the input file for reading
    inputFile = fopen(inputFileName, "r");

    // Check if the input file opened successfully
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1; // Exit with an error code
    }

    // Open the output file for writing
    outputFile = fopen(outputFileName, "w");

    // Check if the output file opened successfully
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile); // Close the input file before exiting
        return 1; // Exit with an error code
    }

    // Process each character in the input file
    while ((ch = fgetc(inputFile)) != EOF) {
        // Convert lowercase to uppercase using toupper function
        if (islower(ch)) {
            ch = toupper(ch);
        }

        // Write the character to the output file
        fputc(ch, outputFile);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("File conversion successful.\n");

    return 0; // Exit successfully
}
