#ifndef FACTORIAL_H
#define FACTORIAL_H

// Function to find factorial
int Factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * Factorial(n - 1);
    }
}

#endif
