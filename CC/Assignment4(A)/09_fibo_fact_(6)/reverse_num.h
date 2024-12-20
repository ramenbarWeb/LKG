#ifndef REVERSE_H
#define REVERSE_H

// Function to find the reverse of a number
int Reverse(int n, int rev) {
    if (n == 0) {
        return rev;
    } else {
        return Reverse(n / 10, rev * 10 + n % 10);
    }
}

#endif
