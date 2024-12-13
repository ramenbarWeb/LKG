
#include<stdio.h>
#include<math.h>

int main() {
    int n;
    printf("Enter a number to print prime numbers till that number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("There is no prime number!");
        return 0;
    }

    printf("Prime numbers up to %d are: ", n);
    for (int i = 2; i <= n; i++) {
        int isPrime = 1; // Assume `i` is prime
        for (int j = 2; j <= sqrt(i); j++) { 
            if (i % j == 0) { // If `i` is divisible by `j`, it's not prime
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}

