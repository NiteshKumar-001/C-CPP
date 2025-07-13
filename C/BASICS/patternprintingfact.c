#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int n;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double sum = 0.0;

    // Calculate and print the pattern
    for (int i = 1; i <= n; ++i) {
        sum += (double)i / factorial(i);
        if (i == n) {
            printf("%d/%d!", i, i);
        } else {
            printf("%d/%d! + ", i, i);
        }
    }

    printf("\nSum of the pattern: %.6f\n", sum);

    return 0;
}
