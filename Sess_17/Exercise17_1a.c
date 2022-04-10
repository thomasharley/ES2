#include <stdio.h>

#define FILENAME argv[1]
int main(int argc, char *argv[])
{
    float numbers[5];
    int i;

    FILE *fout;
    fout = fopen(FILENAME, "wb");

    printf("Enter 5 Floating Point Numbers, one on each line: \n");
    for(i=0; i<5; i++) {
        scanf("%f", &numbers[i]);
        fwrite(&numbers[i], sizeof numbers[i], 1, fout);
    }
    
    fclose(fout);
}