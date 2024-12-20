#include <stdio.h>
#include <ctype.h>

// Function to count vowels and consonants
void Vowel_Cons_Count(char *text, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;

    // Loop through the text
    for (int i = 0; text[i] != '\0'; i++) {
        // Convert the character to lowercase for easier checking
        char ch = tolower(text[i]);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            (*vowels)++;
        }
        // Check if the character is a consonant (alphabetic and not a vowel)
        else if (isalpha(ch)) {
            (*consonants)++;
        }
    }
}

int main() {
    char text[1001];  // Array to store the line of text (up to 1000 characters + null terminator)
    int vowels = 0, consonants = 0;

    // Read a line of text terminated by #
    printf("Enter a line of text (terminated by #): ");
    fgets(text, sizeof(text), stdin);

    // Find the position of the '#' character and terminate the string there
    char *hash_pos = strchr(text, '#');
    if (hash_pos != NULL) {
        *hash_pos = '\0';  // Terminate the string at the '#' character
    }

    // Call Vowel_Cons_Count to count vowels and consonants
    Vowel_Cons_Count(text, &vowels, &consonants);

    // Print the results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
