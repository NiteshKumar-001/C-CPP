#include <stdio.h>

// Function to compare two strings
int compareStrings(const char str1[], const char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; // Strings are not equal
        }
        i++;
    }

    // Check if both strings have reached the null terminator
    return (str1[i] == '\0' && str2[i] == '\0');
}

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";

    // Comparing strings using the custom function
    if (compareStrings(str1, str2)) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
