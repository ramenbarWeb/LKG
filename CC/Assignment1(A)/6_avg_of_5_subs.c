#include <stdio.h>
int main() {
    int marks[5], sum = 0;
    float avg;
    char grade;

    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    avg = sum / 5.0;

    if (avg >= 90) grade = 'A';
    else if (avg >= 80) grade = 'B';
    else if (avg >= 70) grade = 'C';
    else if (avg >= 60) grade = 'D';
    else if (avg >= 50) grade = 'E';
    else grade = 'F';

    printf("Average: %.2f, Grade: %c\n", avg, grade);
    if (grade == 'F') {
        printf("Failed\n");
    } else {
        printf("Successful\n");
    }
    return 0;
}
