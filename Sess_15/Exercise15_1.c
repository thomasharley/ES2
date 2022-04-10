#include <stdio.h>
int main()
{
    int c, i = 0;

    while((c = getchar()) != EOF)
        i++;

    printf("\n%d \n", i);

}