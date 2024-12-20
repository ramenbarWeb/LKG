#include <stdio.h>
#include <string.h>

// Non-recursive function to print the string in reverse
void reverse_non_recursive(char *str) {
    int length = strlen(str);
    
    // Print the string from the last character to the first
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// Recursive function to print the string in reverse
void reverse_recursive(char *str) {
    // Base case: If the string is empty or only one character, return
    if (*str == '\0') {
        return;
    }
    
    // Recursively call with the next character
    reverse_recursive(str + 1);
    
    // Print the current character after the recursive call
    printf("%c", *str);
}

int main() {
    char str[100];

    // Take input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character from fgets input, if any
    str[strcspn(str, "\n")] = '\0';

    // Print the string in reverse using the non-recursive version
    printf("Non-recursive reverse: ");
    reverse_non_recursive(str);

    // Print the string in reverse using the recursive version
    printf("Recursive reverse: ");
    reverse_recursive(str);
    printf("\n");

    return 0;
}
