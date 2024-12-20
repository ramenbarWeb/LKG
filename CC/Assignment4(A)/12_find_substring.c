#include <stdio.h>
#include <stdlib.h>

// Function to find the starting position of the second string in the first string
int find_substring(char *str1, char *str2) {
    int i, j;

    // Traverse str1
    for (i = 0; str1[i] != '\0'; i++) {
        // If the character matches the first character of str2
        if (str1[i] == str2[0]) {
            // Check if the remaining characters of str1 match str2
            for (j = 0; str2[j] != '\0'; j++) {
                if (str1[i + j] != str2[j]) {
                    break;
                }
            }

            // If the whole str2 matched, return the starting position
            if (str2[j] == '\0') {
                return i;  // Starting index of str2 in str1
            }
        }
    }

    return 0;  // If str2 is not found in str1
}

int main() {
    char *str1, *str2;
    int position;

    // Allocate memory dynamically for the strings
    str1 = (char *)malloc(100 * sizeof(char));
    str2 = (char *)malloc(100 * sizeof(char));

    if (str1 == NULL || str2 == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Take input for both strings
    printf("Enter the first string: ");
    scanf("%99[^\n]", str1);  // Takes input until newline is encountered

    // Consume the newline left by the previous scanf
    getchar();

    printf("Enter the second string: ");
    scanf("%99[^\n]", str2);

    // Call the function to find the position of str2 in str1
    position = find_substring(str1, str2);

    // Output the result
    if (position != 0) {
        printf("The second string is found at position %d in the first string.\n", position);
    } else {
        printf("The second string is not found in the first string.\n");
    }

    // Free the allocated memory
    free(str1);
    free(str2);

    return 0;
}
