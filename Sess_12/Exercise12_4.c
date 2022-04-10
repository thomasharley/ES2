#include <stdio.h>
#define MAXLEN 100
main()
{
	char line[MAXLEN + 1];
	
	void getsline(char [], int);
	int count(char [], int);
	
	printf("Input a string:\n");
	getsline(line, MAXLEN);
	
	
	printf("The string contains %d word(s) \n", count(line, MAXLEN));	
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
int count(char line[], int length)
{
	int i = 0;
	int count = 0;
	while(i < length && line[i] != '\0') {
		if(line[i] == ' ' && line[i+1] != ' ' && line[i+1] != '\0') {
			++count;
			++i;
		}
		else {
			++i;
		}
	}
	
	return (count+1);
}