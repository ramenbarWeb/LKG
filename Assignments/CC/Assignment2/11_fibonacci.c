#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0; // 0th Fibonacci number
    } else if (n == 1) {
        return 1; // 1st Fibonacci number
    } else {
        int a = 0, b = 1, next;
        for (int i = 2; i < n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        return b;
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int result = fibonacci(n);
    printf("The %d-th Fibonacci number is: %d\n", n, result);

    return 0;
}
