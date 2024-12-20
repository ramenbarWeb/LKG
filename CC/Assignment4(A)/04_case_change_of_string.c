#include <stdio.h>

// Function to convert all characters of a string to uppercase
void to_uppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char str[1001];  // Array to store the line of text (up to 1000 characters + null terminator)

    // Read a line of text
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    // Convert the text to uppercase
    to_uppercase(str);

    // Print the converted text
    printf("Text in uppercase: %s", str);

    return 0;
}
