#include <stdio.h>

// Function to find the length of a string
int Strlen(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to copy one string to another
void Strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  // Null-terminate the destination string
}

// Function to concatenate two strings
void Strcat(char dest[], char src[]) {
    int i = 0, j = 0;
    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';  // Null-terminate the destination string
}

// Function to reverse a string
void Strrev(char str[]) {
    int start = 0, end = Strlen(str) - 1;
    while (start < end) {
        // Swap characters at start and end
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to compare two strings
int Strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return (str1[i] - str2[i]);
}

int main() {
    int choice;
    char str1[100], str2[100], result[200];
    int len;

    do {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Strlen\n");
        printf("2. Strcpy\n");
        printf("3. Strcat\n");
        printf("4. Strrev\n");
        printf("5. Strcmp\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Strlen
                printf("Enter a string: ");
                getchar();  // To consume the newline character left by scanf
                fgets(str1, 100, stdin);
                len = Strlen(str1) - 1;  // Subtracting 1 for the newline character
                printf("Length of string: %d\n", len);
                break;

            case 2:
                // Strcpy
                printf("Enter source string: ");
                getchar();
                fgets(str1, 100, stdin);
                Strcpy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;

            case 3:
                // Strcat
                printf("Enter first string: ");
                getchar();
                fgets(str1, 100, stdin);
                printf("Enter second string: ");
                fgets(str2, 100, stdin);
                Strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;

            case 4:
                // Strrev
                printf("Enter a string: ");
                getchar();
                fgets(str1, 100, stdin);
                Strrev(str1);
                printf("Reversed string: %s\n", str1);
                break;

            case 5:
                // Strcmp
                printf("Enter first string: ");
                getchar();
                fgets(str1, 100, stdin);
                printf("Enter second string: ");
                fgets(str2, 100, stdin);
                int result = Strcmp(str1, str2);
                if (result == 0) {
                    printf("Strings are equal.\n");
                } else if (result < 0) {
                    printf("First string is less than second string.\n");
                } else {
                    printf("First string is greater than second string.\n");
                }
                break;

            case 6:
                // Exit
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

    } while (choice != 6);

    return 0;
}
