#include <stdio.h>

#define LENGTH 0x80000000
int main()
{
    float number;
    printf("Enter a single floating point number: ");
    scanf("%f", &number);

    FILE *fout;
    fout = fopen("data.dat", "wb");
    fwrite(&number, sizeof number, 1, fout);

    fclose(fout);

    int integer;
    char characters[4];

    FILE *fin;
    fin = fopen("data.dat", "rb");
    fread(&integer, sizeof integer, 1, fin);
    rewind(fin);

    int i;
    for(i=0; i<4; i++) {
        fread(&characters[i], sizeof characters[i], 1, fin);
    }

    fclose(fin);

    void printf_binary(int);

    printf_binary(integer);

    printf("Float point value: %f\n", number);

    printf("Hexadecimal: %#x\n", integer);

    printf("Decimal: %d\n", integer);

}
void printf_binary(int number)
{
    int i;
    for(i = 32; i > 0; --i) {
        if( (number & LENGTH) != 0)
            printf("1");
        else
            printf("0");
        number = number << 1;
    }

    printf("\n");

}