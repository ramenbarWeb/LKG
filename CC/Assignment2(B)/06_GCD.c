#include <stdio.h>

// Function to calculate GCD using Euclid's Algorithm
int gcdEuclid(int a, int b) {
    // Base case: if b is 0, the GCD is a
    if (b == 0)
        return a;
    return gcdEuclid(b, a % b); // Recursive call
}

// Function to calculate GCD using Factorization Method
int gcdFactorization(int a, int b) {
    int min = (a < b) ? a : b; // Take the smaller of the two numbers
    int gcd = 1;

    // Find all factors of the smaller number and check if they divide both a and b
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i; // Update the gcd if it's a common factor
        }
    }
    return gcd;
}

int main() {
    int num1, num2;

    // Input: two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // GCD using Euclid's Algorithm
    int gcdE = gcdEuclid(num1, num2);
    printf("GCD of %d and %d using Euclid's Algorithm is: %d\n", num1, num2, gcdE);

    // GCD using Factorization Method
    int gcdF = gcdFactorization(num1, num2);
    printf("GCD of %d and %d using Factorization Method is: %d\n", num1, num2, gcdF);

    return 0;
}
