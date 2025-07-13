#include <stdio.h>

// Function to copy a string str1 to another string str2
void STRCOPY(char str1[], char str2[]) {
    int i = 0;

    // Copy characters until the null terminator is encountered
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }

    // Add null terminator to the end of the copied string
    str2[i] = '\0';
}

// Function to calculate the length of a string without using library function
int customStrlen(char str[]) {
    int length = 0;

    // Increment length until the null terminator is encountered
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    // Example for string copy operation (STRCOPY)
    char sourceString[] = "Hello, World!";
    char destinationString[50];

    // Copy sourceString to destinationString
    STRCOPY(sourceString, destinationString);

    // Display the copied string
    printf("Copied String: %s\n", destinationString);

    // Example for custom strlen function
    char testString[] = "Custom Strlen Example";

    // Calculate the length of the string using customStrlen
    int length = customStrlen(testString);

    // Display the length of the string
    printf("Length of the string: %d\n", length);

    return 0;
}
