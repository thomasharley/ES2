#include <stdio.h>

#define LENGTH 8
#define BYTE 0x80
int main()
{   
    int i;
    unsigned int number;

    printf("Enter a number between 0 and 255: ");
    scanf("%d", &number);

    for(i = LENGTH; i > 0; --i) {
        if( (number & BYTE) != 0)
            printf("1");
        else
            printf("0");
        number = number << 1;
    }

    printf("\n");
}