#include <stdio.h>
int main() {
    float temp, converted;
    int choice;

    printf("Enter 1 to convert Celsius to Fahrenheit or 2 for Fahrenheit to Celsius: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted = (temp * 9 / 5) + 32;  // Celsius to Fahrenheit formula
        printf("Temperature in Fahrenheit: %.2f\n", converted);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted = (temp - 32) * 5 / 9;  // Fahrenheit to Celsius formula
        printf("Temperature in Celsius: %.2f\n", converted);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
