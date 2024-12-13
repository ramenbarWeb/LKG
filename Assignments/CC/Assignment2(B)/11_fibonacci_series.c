#include <stdio.h>

void fibonacci_series(int n) {
    int a = 0, b = 1, next;
    if (n >= 1) {
        printf("%d ", a); // Print 0th Fibonacci number
    }
    if (n >= 2) {
        printf("%d ", b); // Print 1st Fibonacci number
    }
    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci series up to the %d-th term: ", n);
    fibonacci_series(n);

    return 0;
}
