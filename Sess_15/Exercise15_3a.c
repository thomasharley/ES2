#include <stdio.h>
int main()
{
    float numbers[5];
    int i;
    FILE *fout;
    fout = fopen("data.dat", "w");

    for(i=0; i<5; i++) {
        scanf("%f", &numbers[i]);
        fprintf(fout, "%f\n", numbers[i]);
    }
    fclose(fout);
}