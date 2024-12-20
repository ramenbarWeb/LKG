#include <stdio.h>
#include <ctype.h>  // For isalpha() and isdigit() functions

// Function to encode the input line
void encodeString(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            // For lowercase letters, wrap around after 'z'
            if (str[i] == 'z') {
                str[i] = 'a';
            } else if (str[i] == 'Z') {
                str[i] = 'A';
            } else {
                str[i] = str[i] + 1; // Next alphabet character
            }
        }
        else if (isdigit(str[i])) {
            // For digits, wrap around after '9'
            if (str[i] == '9') {
                str[i] = '0';
            } else {
                str[i] = str[i] + 1; // Next digit
            }
        }
    }
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Use fgets to handle spaces

    // Encode the string
    encodeString(str);

    // Output the encoded string
    printf("Encoded string: %s\n", str);

    return 0;
}
