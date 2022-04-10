#include <stdio.h>
int main(int argc, char *argv[])
{
    int i;
    for (i = 1; --argc; ++i) {
        printf("%s ", argv[i]);
    }

    printf("\n");

}