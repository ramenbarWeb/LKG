#include <stdio.h>

void union_of_sorted_lists(int list1[], int size1, int list2[], int size2) {
    int i = 0, j = 0;

    printf("Union of the two sorted lists: ");
    while (i < size1 && j < size2) {
        // If current element of list1 is smaller, print it and move to the next element
        if (list1[i] < list2[j]) {
            printf("%d ", list1[i]);
            i++;
        }
        // If current element of list2 is smaller, print it and move to the next element
        else if (list1[i] > list2[j]) {
            printf("%d ", list2[j]);
            j++;
        }
        // If both elements are equal, print one and move both pointers
        else {
            printf("%d ", list1[i]);
            i++;
            j++;
        }
    }

    // If any elements remain in list1, print them
    while (i < size1) {
        printf("%d ", list1[i]);
        i++;
    }

    // If any elements remain in list2, print them
    while (j < size2) {
        printf("%d ", list2[j]);
        j++;
    }

    printf("\n");
}

int main() {
    int list1[] = {1, 3, 4, 5, 6};
    int list2[] = {2, 3, 5, 7, 8};
    int size1 = sizeof(list1) / sizeof(list1[0]);
    int size2 = sizeof(list2) / sizeof(list2[0]);

    union_of_sorted_lists(list1, size1, list2, size2);

    return 0;
}
