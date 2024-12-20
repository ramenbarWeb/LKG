#ifndef SUM_DIGITS_H
#define SUM_DIGITS_H

// Function to find the sum of digits
int SumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + SumOfDigits(n / 10);
    }
}

#endif
