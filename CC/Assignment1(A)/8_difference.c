#include <stdio.h>
int main() {
    int code;

    code = 4;
    if (code == 4) 
        printf("bonus\n");
    else 
        printf("penalty\n");

    code = 4;
    if (code = 4) 
        printf("bonus\n");
    else 
        printf("penalty\n");

    return 0;
}
