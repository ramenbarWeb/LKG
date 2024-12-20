#include <stdio.h>

int findRoomNumber(int n) {
    int totalSum = n * (n + 1) / 2; // Sum of all room numbers
    int leftSum = 0;

    for (int x = 1; x <= n; x++) {
        int rightSum = totalSum - leftSum - x; // Remaining sum after x
        if (leftSum == rightSum) {
            return x; // Room found
        }
        leftSum += x; // Increment left sum
    }

    return -1; // If no such room is found
}

int main() {
    int n;
    printf("Enter the total number of rooms: ");
    scanf("%d", &n);

    int roomNumber = findRoomNumber(n);

    if (roomNumber != -1) {
        printf("The room number is: %d\n", roomNumber);
    } else {
        printf("No such room exists.\n");
    }

    return 0;
}
