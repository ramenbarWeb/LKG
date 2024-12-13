#include <stdio.h>
int main() {
    float p, r, n, interest;
    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &p, &r, &n);
    interest = (p * r * n) / 100;
    printf("Simple Interest: %.2f\n", interest);
    return 0;
}
