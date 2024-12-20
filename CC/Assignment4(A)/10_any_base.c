#include <stdio.h>

void ConvertToBase(int decimal, int base) {
    if (decimal == 0) {
        printf("0");
        return;
    }
    
    char result[32];  // Store the result (supports up to base 32)
    int index = 0;

    while (decimal > 0) {
        int remainder = decimal % base;
        // For bases larger than 10, use letters A-F for 10-15, etc.
        if (remainder < 10) {
            result[index++] = remainder + '0';  // '0' to '9'
        } else {
            result[index++] = remainder - 10 + 'A';  // 'A' to 'Z' for base > 10
        }
        decimal = decimal / base;
    }
    
    // Print the result in reverse order (as we collected digits from least significant to most)
    printf("Converted number: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
    printf("\n");
}

int main() {
    int decimal, base;
    
    // Get user input for the decimal number and the base
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    printf("Enter the base (between 2 and 32): ");
    scanf("%d", &base);
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

    if (base < 2 || base > 32) {
        printf("Base must be between 2 and 32.\n");
    } else {
        ConvertToBase(decimal, base);  // Call the function to convert the decimal to the given base
    }
    
    return 0;
}
