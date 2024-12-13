#include <stdio.h>

void inputMatrix(int n, int matrix[n][n]) {
    printf("Enter elements of the matrix (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int n, int mat1[n][n], int mat2[n][n], int result[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;  // Initialize result element
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];  // Perform multiplication
            }
        }
    }
}

void printMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Input the size of the matrix (n x n)
    printf("Enter the size of the matrices: ");
    scanf("%d", &n);

    // Declare matrices
    int mat1[n][n], mat2[n][n], result[n][n];

    // Input the two matrices
    printf("\nMatrix 1:\n");
    inputMatrix(n, mat1);

    printf("\nMatrix 2:\n");
    inputMatrix(n, mat2);

    // Multiply the matrices
    multiplyMatrices(n, mat1, mat2, result);

    // Print the matrices
    printf("\nMatrix 1:\n");
    printMatrix(n, mat1);

    printf("\nMatrix 2:\n");
    printMatrix(n, mat2);

    printf("\nResultant Matrix (Product):\n");
    printMatrix(n, result);

    return 0;
}
