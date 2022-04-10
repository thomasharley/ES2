#include <stdio.h>
int main()
{
    int decimal; // defines integer decimal

    printf("Enter decimal number (between -127 & +127 inclusive): "); 
   
    scanf("%d", &decimal); // prompts for decimal entry
    if(decimal < -127 || decimal > 127) {
        printf("Invalid decimal, program terminating..."); // terminates invalid values
    }
    else {
        printf("The 8-bit  two’s complement  codeword  representation is: %#x \n", decimal & 0xFF); // prints in hexadecimal format
    }

}