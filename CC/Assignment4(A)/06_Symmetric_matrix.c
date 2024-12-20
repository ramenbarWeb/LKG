#include <stdio.h>
#include <stdbool.h>

#define MAX 100

// Function to read a matrix
void read_matrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to transpose a matrix
void transpose_matrix(int matrix[MAX][MAX], int transposed[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

// Function to multiply two matrices
void multiply_matrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to check if a matrix is symmetric
bool is_symmetric(int matrix[MAX][MAX], int rows, int cols) {
    if (rows != cols) return false;

    int transposed[MAX][MAX];
    transpose_matrix(matrix, transposed, rows, cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != transposed[i][j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int matrix[MAX][MAX];
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    read_matrix(matrix, rows, cols);

    if (is_symmetric(matrix, rows, cols)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
