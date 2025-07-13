#include <stdio.h>

int calculateSum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    int sum = calculateSum(array, size);
    
    printf("Sum of the array: %d\n", sum);

    return 0;
}
