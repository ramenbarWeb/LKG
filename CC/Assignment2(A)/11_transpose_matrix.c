#include<stdio.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
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


void transpose(int rows, int cols, int matrix[rows][cols], int trans[rows][cols]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            trans[j][i] = matrix[i][j];
        }
    }
}


int main(){
    int rows, cols;

    // Ipuit the dimensions of the matrices
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    // Declare the matrixces
    int matrix[rows][cols];

    printf("\nMatrix 1: \n");
    inputMatrix(rows, cols, matrix);


    // Transpose of the matrix
    int trans[rows][cols];
    transpose(rows, cols, matrix, trans);


    // print the transpose matrix
    printf("\nTranspose matrix: \n");
    printMatrix(rows, cols, trans);



    return 0;
}