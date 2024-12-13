#include <stdio.h>
#include <ctype.h>  // For the tolower() and toupper() functions

void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);  // Convert uppercase to lowercase
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);  // Convert lowercase to uppercase
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
