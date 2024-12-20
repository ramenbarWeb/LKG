#include <stdio.h>

// Function to perform quicksort in ascending order
void quick_sort_ascending(int *arr, int low, int high) {
    if (low < high) {
        // Partitioning index
        int pi = partition_ascending(arr, low, high);

        // Recursively sort elements before and after partition
        quick_sort_ascending(arr, low, pi - 1);
        quick_sort_ascending(arr, pi + 1, high);
    }
}

// Function to perform quicksort in descending order
void quick_sort_descending(int *arr, int low, int high) {
    if (low < high) {
        // Partitioning index
        int pi = partition_descending(arr, low, high);

        // Recursively sort elements before and after partition
        quick_sort_descending(arr, low, pi - 1);
        quick_sort_descending(arr, pi + 1, high);
    }
}

// Partition function for ascending order
int partition_ascending(int *arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap arr[i + 1] and arr[high] (pivot)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// Partition function for descending order
int partition_descending(int *arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] >= pivot) {  // Change condition for descending order
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap arr[i + 1] and arr[high] (pivot)
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// Function to sort array parts: first part descending, second part ascending
void sort_array_parts(int *arr, int n, int split_index) {
    // Sort the first part (arr[0] to arr[split_index - 1]) in descending order
    quick_sort_descending(arr, 0, split_index - 1);

    // Sort the second part (arr[split_index] to arr[n - 1]) in ascending order
    quick_sort_ascending(arr, split_index, n - 1);
}

// Function to print the array
void print_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, split_index;

    // Read the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read the array elements
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the index where the array will be split
    printf("Enter the split index: ");
    scanf("%d", &split_index);

    // Ensure the split index is valid
    if (split_index < 1 || split_index >= n) {
        printf("Invalid split index.\n");
        return 1;
    }

    // Sort the array parts
    sort_array_parts(arr, n, split_index);

    // Print the final array
    printf("Final array: ");
    print_array(arr, n);

    return 0;
}
