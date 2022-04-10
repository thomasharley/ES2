#include <stdio.h>

#define FILENAME argv[1]
int main(int argc, char *argv[])
{
    FILE *fin;
    fin = fopen(FILENAME, "rb");

    float numbers[5];
    float sum = 0;
    int i;

    for(i=0; i<5; i++) {
        fread(&numbers[i], sizeof numbers[i], 1, fin);
        sum = (numbers[i] + sum);
    }

    fclose(fin);

    printf("Sum: %f \n", sum);
    printf("Average: %f \n", (sum / 5));

}