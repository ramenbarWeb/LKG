#include <stdio.h>

void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is uppercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');  // Convert uppercase to lowercase
        }
        // Check if the character is lowercase
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // Convert lowercase to uppercase
        }
    }
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input including spaces

    // Toggle the case of each letter in the string
    toggleCase(str);

    // Print the modified string
    printf("Changed string: %s", str);

    return 0;
}
