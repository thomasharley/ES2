#include <stdio.h>
int main()
{
    FILE *fin;
    fin = fopen("data.dat", "r");
    float numbers[5];

    int i;
    float sum = 0;
    for(i=0; i<5; i++) {
        fscanf(fin, "%f", &numbers[i]);
        sum = (sum + numbers[i]);
    }

    printf("Sum: %f\n", sum);
    float average = (sum)/(5);
    printf("Average: %f\n", average);
    
    fclose(fin);
}