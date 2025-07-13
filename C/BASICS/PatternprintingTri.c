#include <stdio.h>

int main() {
    int i, j, n;
    char currentChar;

    // Input: Get the number of rows (n)
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop through each row
    for (i = 0; i < n; i++) {
        // Print leading spaces
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print characters in increasing order
        currentChar = 'A';
        for (j = 0; j <= i; j++) {
            printf("%c", currentChar);
            currentChar++;
        }

        // Print characters in decreasing order (excluding the first character)
        currentChar -= 2;
        for (j = 0; j < i; j++) {
            printf("%c", currentChar);
            currentChar--;
        }

        // Move to the next line for the next row
        printf("\n");
    }

    return 0;
}
