#include<stdio.h>

int main(){
    int a, b;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);

    // Swap with third variable
/*     int temp = a;
    a = b;
    b = temp; */

    // Swap without third variable
    a = a+b;
    b = a-b;
    a = a-b;

    printf("a = %d, b = %d", a, b);

    return 0;
}