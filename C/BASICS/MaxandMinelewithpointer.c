#include <stdio.h>

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    // Input elements of the array
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }

    // Find maximum and minimum using pointers
    int *ptr = array;
    int max = *ptr;
    int min = *ptr;

    for (int i = 1; i < size; ++i) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }

        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }

    // Display the result
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
