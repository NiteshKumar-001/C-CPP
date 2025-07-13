#include <stdio.h>

// Function to subtract two matrices
void subtractMatrices(int rows, int cols, int mat1[10][10], int mat2[10][10], int result[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int mat[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input: Get the size of matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[10][10], matrix2[10][10], resultMatrix[10][10];

    // Input: Get elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input: Get elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Subtract the matrices
    subtractMatrices(rows, cols, matrix1, matrix2, resultMatrix);

    // Display the result matrix
    printf("\nResultant Matrix (Subtraction of Matrix1 and Matrix2):\n");
    displayMatrix(rows, cols, resultMatrix);

    return 0;
}
