#include <stdio.h>

void multiplyMatrices(int mat1[][3], int mat2[][3], int result[][3]) {
    int i, j, k;

       for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = 0;
        }
    }

       for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][3]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[3][3], mat2[3][3], result[3][3];
    int i, j;

        printf("Enter elements of first matrix (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

     printf("Enter elements of second matrix (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

        multiplyMatrices(mat1, mat2, result);

     printf("Resultant matrix after multiplication:\n");
    displayMatrix(result);

    return 0;
}
