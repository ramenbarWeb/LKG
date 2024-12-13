#include <stdio.h>
int main() {
    int a, b, z;

    a = 5; b = 6; z = a++ + b++;
    printf("z = %d (a++ + b++)\n", z);

    a = 5; b = 6; z = a++ + --b;
    printf("z = %d (a++ + --b)\n", z);

    a = 5; z = a++ + ++a;
    printf("z = %d (a++ + ++a)\n", z);

    return 0;
}
