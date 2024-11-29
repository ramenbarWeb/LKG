#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10; // Add the last digit of num to rev
        num /= 10;                 // Remove the last digit from num
    }
    return rev;
}

int main() {
    int num, rev;
    printf("Enter a number: ");
    scanf("%d", &num);

    rev = reverse(num);

    printf("Reverse of the number is: %d\n", rev);

    if (num == rev) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
