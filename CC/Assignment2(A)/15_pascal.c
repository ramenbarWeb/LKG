#include <stdio.h>

void generatePascalsTriangle(int n) {
    int triangle[10][10] = {0}; // Create a 2D array to hold the values
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1; // First and last elements of each row are 1
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            printf("%d ", triangle[i][j]); // Print each value
        }
        printf("\n"); // Move to the next row
    }
}

int main() {
    int n = 10; // Number of rows for Pascal's Triangle
    generatePascalsTriangle(n);
    return 0;
}
