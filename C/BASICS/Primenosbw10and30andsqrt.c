#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Not prime
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;  // Not prime
        }
    }

    return 1;  // Prime
}

int main() {
    int start = 10;
    int end = 30;

    printf("Prime numbers between %d and %d and their squares:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d is prime, and its square is %d\n", i, i * i);
        }
    }

    return 0;
}
