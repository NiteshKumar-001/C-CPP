#include <stdio.h>

double calculateAverage(int *arr, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}
double averageOfArray(int *arr, int size, double (*funcPtr)(int *, int)) {
    return funcPtr(arr, size);
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    double avg = averageOfArray(array, size, calculateAverage);
    
    printf("Average of the array: %.2f\n", avg);

    return 0;
}
