#include <stdio.h>

#define MAX 100

void read_array(int rows, int cols, int arr[rows][cols]) {
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void print_array(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }
}

void sort_array(int rows, int cols, int arr[rows][cols]) {
    int temp;
    for (int i = 0; i < rows * cols - 1; i++) {
        for (int j = i + 1; j < rows * cols; j++) {
            if (arr[i / cols][i % cols] > arr[j / cols][j % cols]) {
                temp = arr[i / cols][i % cols];
                arr[i / cols][i % cols] = arr[j / cols][j % cols];
                arr[j / cols][j % cols] = temp;
            }
        }
    }
}

void add_arrays(int rows, int cols, int arr1[rows][cols], int arr2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr1[MAX][MAX], arr2[MAX][MAX], sum[MAX][MAX];

    printf("Enter elements for the first array:\n");
    read_array(rows, cols, arr1);

    printf("Enter elements for the second array:\n");
    read_array(rows, cols, arr2);

    printf("Sorting the first array...\n");
    sort_array(rows, cols, arr1);

    printf("Sorting the second array...\n");
    sort_array(rows, cols, arr2);

    printf("Adding the arrays...\n");
    add_arrays(rows, cols, arr1, arr2, sum);

    printf("Sorting the resulting sum array...\n");
    sort_array(rows, cols, sum);

    printf("Sorted first array:\n");
    print_array(rows, cols, arr1);

    printf("Sorted second array:\n");
    print_array(rows, cols, arr2);

    printf("Sorted sum array:\n");
    print_array(rows, cols, sum);

    return 0;
}
