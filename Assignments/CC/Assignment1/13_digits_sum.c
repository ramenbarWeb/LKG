#include <stdio.h>
int main() {
    int num, first, middle, last;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Extract digits
    first = (num / 100);             // First digit 
    printf("first: %d\n", first);
    middle = (num / 10) % 10;        // Middle digit
    printf("second: %d\n", middle);

    last = num % 10;                 // Last digit
    printf("last: %d\n", last);


    if ((first + last) == (2 * middle)) {
        printf("The sum of the first and last digits is equal to twice the middle digit.\n");
    } else {
        printf("The sum of the first and last digits is NOT equal to twice the middle digit.\n");
    }

    return 0;
}
