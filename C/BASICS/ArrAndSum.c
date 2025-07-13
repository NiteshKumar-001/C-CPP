#include <stdio.h>

// Function to calculate the sum of elements in an array
int calculateSum(int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return sum;
}

int main() {
    // Creating an array of 10 elements
    int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Calling the function to calculate the sum
    int sum = calculateSum(myArray, 10);

    // Displaying the result
    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}
