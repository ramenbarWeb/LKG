#include <stdio.h>

int findMinimumNotes(int amount, int totalNotes) {
    int notes[] = {100, 50, 20, 10};
    int noteCount[4] = {};

    for (int i = 0; i < 4; i++) {
        noteCount[i] = amount / notes[i];
        amount %= notes[i];
    }

    printf("Minimum notes required: \n");
    for (int i = 0; i < 4; i++) {
        printf("RS: %d noteCount: %d\n", notes[i], noteCount[i]);
        totalNotes += noteCount[i];
    }

    return totalNotes;
}

int main() {
    int amount, totalNotes = 0;
    printf("Enter an amount: ");
    scanf("%d", &amount);

    int TL = findMinimumNotes(amount, totalNotes);

    printf("The total notes required for the amount %d is: %d\n", amount, TL);

    return 0;
}