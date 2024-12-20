#include <stdio.h>
#include <limits.h>

// Recursive helper to find the nth max element
void find_nth_max_recursive(int arr[], int size, int index, int *max_values, int n) {
    if (index == size) return;

    for (int i = 0; i < n; i++) {
        if (arr[index] > max_values[i]) {
            for (int j = n - 1; j > i; j--) {
                max_values[j] = max_values[j - 1];
            }
            max_values[i] = arr[index];
            break;
        }
    }

    find_nth_max_recursive(arr, size, index + 1, max_values, n);
}

// Recursive helper to find the nth min element
void find_nth_min_recursive(int arr[], int size, int index, int *min_values, int n) {
    if (index == size) return;

    for (int i = 0; i < n; i++) {
        if (arr[index] < min_values[i]) {
            for (int j = n - 1; j > i; j--) {
                min_values[j] = min_values[j - 1];
            }
            min_values[i] = arr[index];
            break;
        }
    }

    find_nth_min_recursive(arr, size, index + 1, min_values, n);
}

void find_elements(int arr[], int size, int nth_max, int nth_min, int *nth_max_val, int *nth_min_val, int *middle) {
    // Validate input
    if (size <= 0 || nth_max > size || nth_min > size) {
        printf("Error: Invalid input parameters.\n");
        return;
    }

    // Initialize arrays to store top nth max and min values
    int max_values[nth_max];
    int min_values[nth_min];

    for (int i = 0; i < nth_max; i++) max_values[i] = INT_MIN;
    for (int i = 0; i < nth_min; i++) min_values[i] = INT_MAX;

    // Find nth maximum and nth minimum using recursion
    find_nth_max_recursive(arr, size, 0, max_values, nth_max);
    find_nth_min_recursive(arr, size, 0, min_values, nth_min);

    // Retrieve the nth max, nth min, and middle value
    *nth_max_val = max_values[nth_max - 1];
    *nth_min_val = min_values[nth_min - 1];
    *middle = arr[size / 2];
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Error: Array size must be greater than 0.\n");
        return 1;
    }

    int arr[size];
    printf("Enter %d elements of the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int nth_max, nth_min;
    printf("Enter the value of nth maximum to find: ");
    scanf("%d", &nth_max);
    printf("Enter the value of nth minimum to find: ");
    scanf("%d", &nth_min);

    int nth_max_val, nth_min_val, middle;

    find_elements(arr, size, nth_max, nth_min, &nth_max_val, &nth_min_val, &middle);

    printf("%dth Maximum: %d\n", nth_max, nth_max_val);
    printf("%dth Minimum: %d\n", nth_min, nth_min_val);
    printf("Middle Element: %d\n", middle);

    return 0;
}
