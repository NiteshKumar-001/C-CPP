#include <stdio.h>

// Function to swap two numbers using call by reference
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Call the function with references
    swapByReference(&num1, &num2);

    // Display the result (values changed due to call by reference)
    printf("Numbers after swap (call by reference):\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
