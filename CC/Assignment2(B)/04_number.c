#include <stdio.h>
#include <string.h>

// Arrays for words representation
const char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
const char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
const char *teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

// Function to process numbers less than 1000
void processChunk(int num, char *result) {
    char temp[100] = "";

    if (num >= 100) {
        sprintf(temp, "%s Hundred ", ones[num / 100]);
        strcat(result, temp);
        num %= 100;
    }

    if (num >= 10 && num <= 19) {
        strcat(result, teens[num - 10]);
        strcat(result, " ");
    } else {
        if (num >= 20) {
            sprintf(temp, "%s ", tens[num / 10]);
            strcat(result, temp);
            num %= 10;
        }
        if (num > 0) {
            sprintf(temp, "%s ", ones[num]);
            strcat(result, temp);
        }
    }
}

// Function to convert the number to words
void convertToWords(long long num, const char *system) {
    char result[1000] = "";
    const char *indianLabels[] = {"", "Thousand", "Lakh", "Crore"};
    const char *intlLabels[] = {"", "Thousand", "Million", "Billion"};
    char *labels[5];
    int divisors[] = {100, 10, 10, 100}; // Indian system divisors for Crore, Lakh, Thousand, Hundreds

    // Select the correct labels based on the system
    if (strcmp(system, "Indian") == 0) {
        memcpy(labels, indianLabels, sizeof(indianLabels));
    } else {
        memcpy(labels, intlLabels, sizeof(intlLabels));
    }

    int count = 0;
    while (num > 0) {
        int part = num % (count == 1 && strcmp(system, "Indian") == 0 ? 1000 : 100);
        num /= (count == 1 && strcmp(system, "Indian") == 0 ? 1000 : 100);

        char temp[200] = "";
        processChunk(part, temp);

        if (part > 0 && count > 0) {
            strcat(temp, labels[count]);
            strcat(temp, " ");
        }

        strcat(temp, result);
        strcpy(result, temp);

        count++;
    }

    printf("Number in words (%s system): %s\n", system, result);
}

// Main function
int main() {
    long long num;

    printf("Enter an 8-digit number: ");
    scanf("%lld", &num);

    if (num < 0 || num > 99999999) {
        printf("Please enter a valid 8-digit number.\n");
        return 1;
    }

    printf("\n--- Output in Indian Number System ---\n");
    convertToWords(num, "Indian");

    printf("\n--- Output in International Number System ---\n");
    convertToWords(num, "International");

    return 0;
}
