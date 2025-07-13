#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100]; // Assuming a maximum length of 100 characters

    // Input: Get a string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character at the end (if present)
    inputString[strcspn(inputString, "\n")] = '\0';

    // Find the length of the string
    int length = strlen(inputString);

    // Output: Display the length of the string
    printf("Length of the entered string: %d\n", length);

    return 0;
}
