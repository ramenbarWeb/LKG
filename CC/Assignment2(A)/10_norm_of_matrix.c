#include <stdio.h>
#include <math.h>  // For using sqrt() function

// Function to input matrix elements
void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to calculate the norm of the matrix
double calculateNorm(int rows, int cols, int matrix[rows][cols]) {
    double sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j] * matrix[i][j];  // Sum of squares
        }
    }
    return sqrt(sum);  // Return the square root of the sum
}

// Function to print the matrix
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

    // Declare the matrix
    int matrix[rows][cols];

    // Input the matrix elements
    inputMatrix(rows, cols, matrix);

    // Calculate and print the norm
    double norm = calculateNorm(rows, cols, matrix);
    printf("\nNorm of the matrix: %.2f\n", norm);

    // Print the matrix
    printf("\nMatrix:\n");
    printMatrix(rows, cols, matrix);

    return 0;
}
