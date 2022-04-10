#include <stdio.h>

main()
{
	char ch;
	
	printf("Enter your character: \n");
	
	scanf("%c", &ch);
	
	if(ch >= 'A' && ch <= 'Z')
		printf("%c \n", ch + ('a' - 'A'));
	else if(ch >= 'a' && ch <= 'z')
		printf("%c \n", ch - ('a' - 'A'));
	else
		printf("Invalid character, case cannot be changed, terminating. \n");

}
