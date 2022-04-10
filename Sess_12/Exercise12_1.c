#include <stdio.h>
#define MAXLEN 80
main()
{
	char line[MAXLEN +1];
	
	printf("Enter a line of text: \n");
	scanf("%s", line);
	printf("The string contains: \n");
	printf("%s", line);
	printf("\n");
	
}