#include <stdio.h>
#include "fibonacci.h"
#include "gcd.h"
#include "factorial.h"
#include "reverse_num.h"
#include "sum_digits.h"
#include "divisors.h"

int main() {
    int choice, n, n1, n2;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Fibonacci\n");
        printf("2. GCD\n");
        printf("3. Factorial\n");
        printf("4. Reverse\n");
        printf("5. Sum of Digits\n");
        printf("6. Divisors\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Fibonacci
                printf("Enter the number to find Fibonacci: ");
                scanf("%d", &n);
                printf("Fibonacci number at position %d is: %d\n", n, Fibonacci(n));
                break;

            case 2:
                // GCD
                printf("Enter two numbers to find GCD: ");
                scanf("%d %d", &n1, &n2);
                printf("GCD of %d and %d is: %d\n", n1, n2, GCD(n1, n2));
                break;

            case 3:
                // Factorial
                printf("Enter a number to find its factorial: ");
                scanf("%d", &n);
                printf("Factorial of %d is: %d\n", n, Factorial(n));
                break;

            case 4:
                // Reverse
                printf("Enter a number to find its reverse: ");
                scanf("%d", &n);
                printf("Reverse of %d is: %d\n", n, Reverse(n, 0));
                break;

            case 5:
                // Sum of Digits
                printf("Enter a number to find the sum of its digits: ");
                scanf("%d", &n);
                printf("Sum of digits of %d is: %d\n", n, SumOfDigits(n));
                break;

            case 6:
                // Divisors
                printf("Enter a number to find its divisors: ");
                scanf("%d", &n);
                printf("Divisors of %d are: ", n);
                Divisors(n, 1);
                printf("\n");
                break;

            case 7:
                // Exit
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

    } while (choice != 7);

    return 0;
}
