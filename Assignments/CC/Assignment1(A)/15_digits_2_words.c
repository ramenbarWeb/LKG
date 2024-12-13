#include <stdio.h>
void printWord(int digit) {
    switch (digit) {
        case 0: printf("Zero "); break;
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
    }
}

int main() {
    int num, digit1, digit2, digit3;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1;
    }

    // Extract digits
    digit1 = num / 100;        // First digit
    digit2 = (num / 10) % 10;  // Middle digit
    digit3 = num % 10;         // Last digit

    // Convert digits to words
    printWord(digit1);
    printWord(digit2);
    printWord(digit3);

    printf("\n");
    return 0;
}
