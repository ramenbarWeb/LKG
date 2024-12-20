#ifndef DIVISORS_H
#define DIVISORS_H

// Function to find divisors of a number
void Divisors(int n, int i) {
    if (i > n) {
        return;
    } else {
        if (n % i == 0) {
            printf("%d ", i);
        }
        Divisors(n, i + 1);
    }
}

#endif
