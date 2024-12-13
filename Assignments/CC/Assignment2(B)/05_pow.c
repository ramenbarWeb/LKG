#include <stdio.h>

// Function to calculate power using loops
long long power(int base, int exponent) {
    long long result = 1; // Initialize result to 1 (the identity for multiplication)

    // Loop to multiply the base 'exponent' times
    for (int i = 1; i <= exponent; i++) {
        result *= base; // Multiply the result by the base
    }

    return result;
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

    // Calculate the power
    long long result = power(base, exponent);

    // Output the result
    printf("%d raised to the power of %d is: %lld\n", base, exponent, result);

    return 0;
}
