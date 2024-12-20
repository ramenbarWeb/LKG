#ifndef FIBONACCI_H
#define FIBONACCI_H

// Function to generate Fibonacci number
int Fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

#endif
