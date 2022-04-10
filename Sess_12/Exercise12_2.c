#include <stdio.h>
#define MAXLEN 100
main()
{
	char line[MAXLEN + 1];
	
	void getsline(char [], int);
	void printline(char []);
	
	
	printf("Input a string:\n");
	getsline(line, MAXLEN);
	
	printf("Output - one word per line:\n");
	printline(line);
	
}
void getsline(char line[], int length)
{
	int i = 0, c;
	while(i < length && (c = getchar()) != '\n' && c != EOF)
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
}
void printline(char line[])
{
	int i = 0;
	while(line[i] != '\0')
	{
		if(line[i] == ' ') {
			putchar('\n');
			++i;
		}
		else {
			putchar(line[i]);
			++i;	
		}
	}	
	putchar('\n');
}