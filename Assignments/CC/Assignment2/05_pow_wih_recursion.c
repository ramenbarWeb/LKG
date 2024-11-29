#include <stdio.h>

// Function to calculate power using recursion
long long power(int base, int exponent) {
    // Base case: if exponent is 0, return 1
    if (exponent == 0) {
        return 1;
    }
    // Recursive case: base^exponent = base * base^(exponent-1)
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    // Input: base and exponent
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // If the exponent is negative, print an error message
    if (exponent < 0) {
        printf("Exponent should be a non-negative integer.\n");
        return 1; // Exit the program with an error
    }

    // Calculate the power using recursion
    long long result = power(base, exponent);

    // Output the result
    printf("%d raised to the power of %d is: %lld\n", base, exponent, result);

    return 0;
}
