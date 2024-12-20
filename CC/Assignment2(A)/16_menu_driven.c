#include <stdio.h>

// Function to calculate the length of a string
int Strlen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

// Function to copy one string to another
void Strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// Function to concatenate two strings
void Strcat(char dest[], char src[]) {
    int i = Strlen(dest);
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

// Function to reverse a string
void Strrev(char str[]) {
    int len = Strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to compare two strings
int Strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

// Main function with a menu-driven implementation
int main() {
    char str1[100], str2[100], result[100];
    int choice;

    do {
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
            printf("Enter a string: ");
            scanf(" %[^\n]", str1);
            printf("Length of the string: %d\n", Strlen(str1));
            break;

        case 2:
            printf("Enter a source string: ");
            scanf(" %[^\n]", str1);
            Strcpy(result, str1);
            printf("Copied string: %s\n", result);
            break;

        case 3:
            printf("Enter the first string: ");
            scanf(" %[^\n]", str1);
            printf("Enter the second string: ");
            scanf(" %[^\n]", str2);
            Strcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;

        case 4:
            printf("Enter a string: ");
            scanf(" %[^\n]", str1);
            Strrev(str1);
            printf("Reversed string: %s\n", str1);
            break;

        case 5:
            printf("Enter the first string: ");
            scanf(" %[^\n]", str1);
            printf("Enter the second string: ");
            scanf(" %[^\n]", str2);
            int cmp = Strcmp(str1, str2);
            if (cmp == 0) {
                printf("Strings are equal.\n");
            } else if (cmp > 0) {
                printf("First string is greater.\n");
            } else {
                printf("Second string is greater.\n");
            }
            break;

        case 6:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
