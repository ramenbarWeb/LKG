#include <stdio.h>
#include <stdlib.h>

void celsiousToFarenheit(float celsious) {
    float farenheit = (celsious * 9 / 5) + 32;
    printf("Temperature in farenheit: %.2f\n", farenheit);
}

void farenheitToCelsious(float farenheit) {
    float celsious = (farenheit - 32) * 5 / 9;
    printf("Temerature in celsious: %.2f\n", celsious);
}

int main() {
    int choice;
    float temp;
    printf("Enter 1 to convert celsious to farenheit and\nEnter 2 to convert farenheit to celsious: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature to convert from celsious to farenheit: ");
        scanf("%f", &temp);
        celsiousToFarenheit(temp);
    } else if (choice == 2) {
        printf("Enter temperature to convert from farenheit to celsious: ");
        scanf("%f", &temp);
        farenheitToCelsious(temp);
    } else {
        printf("Please enter a valid input: ");
        exit(0);
    }


    return 0;
}