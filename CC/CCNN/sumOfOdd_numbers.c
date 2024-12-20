#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        sum += 2 * i - 1; // Add the current odd number to the sum
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}
