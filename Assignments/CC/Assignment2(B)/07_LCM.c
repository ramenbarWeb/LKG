#include <stdio.h>

// Function to compute GCD of two numbers using Euclid's Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute LCM of two numbers using the formula LCM(a, b) = (a * b) / GCD(a, b)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to compute LCM of n numbers
int lcmOfArray(int arr[], int n) {
    int result = arr[0]; // Start with the first number in the array

    // Compute LCM of the array using pairwise LCM calculation
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }

    return result;
}

int main() {
    int n;

    // Input: Number of integers
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    // Input: The integers
    printf("Enter the integers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Compute and print the LCM of the array
    int result = lcmOfArray(arr, n);
    printf("The LCM of the given integers is: %d\n", result);

    return 0;
}
