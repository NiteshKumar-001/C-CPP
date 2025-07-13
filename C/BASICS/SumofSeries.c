#include <stdio.h>

int main() {
    int n, i;
    int firstTerm = 1;
    int commonDifference = 2;
    int sum = 0;

    // Input: Get the value of n
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate the sum using the formula
    for (i = 0; i < n; i++) {
        sum += firstTerm + i * commonDifference;
    }

    // Output: Display the sum
    printf("Sum of the first %d terms: %d\n", n, sum);

    return 0;
}
