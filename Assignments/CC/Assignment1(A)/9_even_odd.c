#include<stdio.h>
int isEven(int);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);


    if((num&1) == 0)
        printf("Even");
    else    
        printf("odd");

    return 0;
}

