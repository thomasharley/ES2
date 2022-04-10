#include <stdio.h>
main()
{
	char message[] = "Vacation is near";
	
	void display(char *);
	
	display(message);
}
void display(char *str)
{	
	//int i = 0;      /* can also use an int i to print out full string */
	while(*str != '\0') {
		putchar(*(str++));
		//i++;
	}
	putchar('\n');

}