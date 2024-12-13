#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void transposeMatrix(int rows, int cols, int matrix[rows][cols], int transpose[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

void multiplyMatrices(int rows, int cols, int mat1[rows][cols], int mat2[cols][rows], int result[rows][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < rows; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Input the dimensions of the matrix
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Declare the matrix and its transpose
    int matrix[rows][cols], transpose[cols][rows], result[rows][rows];

    // Input the matrix
    printf("\nMatrix:\n");
    inputMatrix(rows, cols, matrix);

    // Transpose the matrix
    transposeMatrix(rows, cols, matrix, transpose);

    // Multiply the matrix with its transpose
    multiplyMatrices(rows, cols, matrix, transpose, result);

    // Print the original matrix
    printf("\nOriginal Matrix:\n");
    printMatrix(rows, cols, matrix);

    // Print the transposed matrix
    printf("\nTransposed Matrix:\n");
    printMatrix(cols, rows, transpose);

    // Print the result of multiplication
    printf("\nMatrix multiplied by its transpose:\n");
    printMatrix(rows, rows, result);

    return 0;
}
