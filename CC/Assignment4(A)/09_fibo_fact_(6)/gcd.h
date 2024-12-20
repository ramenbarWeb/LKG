#ifndef GCD_H
#define GCD_H

// Function to find the GCD of two numbers
int GCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return GCD(b, a % b);
    }
}

#endif
