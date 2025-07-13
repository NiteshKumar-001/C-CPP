#include <stdio.h>

int main() {
    int rows = 4;  // Number of rows in the pattern

    // Outer loop for each row
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for spaces before numbers
        for (int space = 1; space <= rows - i; ++space) {
            printf("  ");
        }

        // Inner loop for printing numbers
        for (int j = 1; j <= i; ++j) {
            printf("%d ", j);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
