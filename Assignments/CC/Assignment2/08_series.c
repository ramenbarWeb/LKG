#include <stdio.h>
#include <math.h>

// Function to compute the first series: 1/1! + 2/2! + 3/3! + ... up to 'n' terms
double series1(int n) {
    double result = 0.0;
    double fact = 1.0;

    for (int i = 1; i <= n; i++) {
        fact *= i;                  // Calculate factorial of i
        result += (double)i / fact; // Add i/i!
    }

    return result;
}

// Function to compute sine(x) using Taylor series expansion
double sine(double x, int terms) {
    double result = 0.0;
    double power = x;  // First power of x
    double fact = 1.0; // Factorial term
    int sign = -1;     // Alternating sign (+, -, +, ...)

    for (int i = 1; i <= terms; i++) {
        result += power / fact;
        power *= x * x;                // Power of x increases by 2 each time
        fact *= (2 * i) * (2 * i + 1); // Factorial for sine expansion
        sign = -sign;                  // Alternating sign for sine terms
    }

    return result;
}

// Function to compute cosine(x) using Taylor series expansion
double cosine(double x, int terms) {
    double result = 1.0;
    double power = 1.0;
    double fact = 1.0;
    int sign = -1; // Alternating sign (+, -, +, ...)

    for (int i = 1; i <= terms; i++) {
        power *= x * x;                // Power of x increases by 2 each time
        fact *= (2 * i - 1) * (2 * i); // Factorial for cosine expansion
        result += sign * power / fact;
        sign = -sign; // Alternating sign for cosine terms
    }

    return result;
}

// Function to compute log(1+x) using Taylor series expansion
double log1p_series(double x, int terms) {
    double result = 0.0;
    double term = x; // First term is x
    int sign = -1;   // Alternating sign (+, -, +, ...)

    for (int i = 1; i <= terms; i++) {
        result += term / i;
        term *= x;    // x^i for the next terms
        sign = -sign; // Alternating sign for log series
    }

    return result;
}

int main() {
    int choice, n;
    double x;

    printf("Choose the series to compute:\n");
    printf("1. 1/1! + 2/2! + 3/3! + ... (up to 10 terms)\n");
    printf("2. Sine(x) series\n");
    printf("3. Cosine(x) series\n");
    printf("4. Log(1+x) series\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("Enter the number of terms (up to 10): ");
        scanf("%d", &n);
        if (n > 10) {
            printf("Maximum 10 terms allowed.\n");
            return 1;
        }
        printf("Result of the series: %lf\n", series1(n));
        break;

    case 2:
        printf("Enter the value of x (in radians): ");
        scanf("%lf", &x);
        printf("Enter the number of terms for sine: ");
        scanf("%d", &n);
        printf("Sine(x) = %lf\n", sine(x, n));
        break;

    case 3:
        printf("Enter the value of x (in radians): ");
        scanf("%lf", &x);
        printf("Enter the number of terms for cosine: ");
        scanf("%d", &n);
        printf("Cosine(x) = %lf\n", cosine(x, n));
        break;

    case 4:
        printf("Enter the value of x (x > -1): ");
        scanf("%lf", &x);
        printf("Enter the number of terms for log(1+x): ");
        scanf("%d", &n);
        printf("Log(1+x) = %lf\n", log1p_series(x, n));
        break;

    default:
        printf("Invalid choice.\n");
    }

    return 0;
}
