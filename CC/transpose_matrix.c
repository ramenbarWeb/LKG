#include <stdio.h>

// Function declarations
void inputMatrix(int rows, int cols, int mat[rows][cols]);
void transposeMatrix(int rows, int cols, int mat[rows][cols], int trans[cols][rows]);
void printMatrix(int rows, int cols, int mat[rows][cols]);

int main() {
    int rows, cols;

    // Input matrix dimensions
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // Declare the original matrix and transpose matrix with correct dimensions
    int matrix[rows][cols];
    int trans[cols][rows];

    // Input elements into the matrix
    inputMatrix(rows, cols, matrix);

    // Compute the transpose of the matrix
    transposeMatrix(rows, cols, matrix, trans);

    // Print the original matrix
    printf("\nOriginal Matrix:\n");
    printMatrix(rows, cols, matrix);

    // Print the transpose matrix
    printf("\nTranspose Matrix:\n");
    printMatrix(cols, rows, trans);

    return 0;
}

// Function to input elements into a matrix
void inputMatrix(int rows, int cols, int mat[rows][cols]) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to compute the transpose of a matrix
void transposeMatrix(int rows, int cols, int mat[rows][cols], int trans[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
}
