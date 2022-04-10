#include <stdio.h>

#define LENGTH 16

int main()
{

    unsigned int i;
    unsigned short int original, reversed, currentno;

    reversed = 0;

    printf("Enter a 16-bit hexadecimal codeword: ");
    scanf("%hx", &original);

    for(i = LENGTH; i > 0; --i) {
        currentno = original & 0x1;
        reversed = reversed << 1;
        reversed = reversed | currentno;
        original = original >> 1;
    }
    printf("Bit reversed number: %hx\n", reversed);

}