#include <stdio.h>
#include <stdlib.h>

// Function to calculate the average of the list
float calculateAverage(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

// Function to compare two integers (used for sorting)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to calculate the median of the list
float calculateMedian(int *arr, int n) {
    // Sort the array first
    qsort(arr, n, sizeof(int), compare);

    // If the number of elements is odd, return the middle element
    if (n % 2 != 0) {
        return arr[n / 2];
    } else {
        // If the number of elements is even, return the average of the two middle elements
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    }
}

int main() {
    int n;

    // Ask for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory to store the numbers
    int *arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input the numbers
    printf("Enter %d numbers: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate and display the average
    float average = calculateAverage(arr, n);
    printf("Average: %.2f\n", average);

    // Calculate and display the median
    float median = calculateMedian(arr, n);
    printf("Median: %.2f\n", median);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
