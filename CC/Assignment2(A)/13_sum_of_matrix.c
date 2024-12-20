#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
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

    // Input the dimensions of the matrices
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    // Declare the matrices
    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];

    // Input the two matrices
    printf("\nMatrix 1:\n");
    inputMatrix(rows, cols, mat1);

    printf("\nMatrix 2:\n");
    inputMatrix(rows, cols, mat2);

    // Add the matrices
    addMatrices(rows, cols, mat1, mat2, result);

    // Print the matrices
    printf("\nMatrix 1:\n");
    printMatrix(rows, cols, mat1);

    printf("\nMatrix 2:\n");
    printMatrix(rows, cols, mat2);

    printf("\nResultant Matrix (Sum):\n");
    printMatrix(rows, cols, result);

    return 0;
}
