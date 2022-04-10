#include <stdio.h>
#define MAXLEN 100
main()
{
	
	char insert[MAXLEN + 1], string[MAXLEN + 1];
	int position;
	
	void getsline(char [], int);
	
	
	printf("Input a string: \n");
	getsline(string, MAXLEN);
	printf("Input a string to insert somewhere in the above string: \n");
	getsline(insert, MAXLEN);
	printf("Enter the position you would like the string to be inserted: ");
	scanf("%d", &position);

	void add_chr(char [], char[], int);
	
	add_chr(insert, string, position);

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
void add_chr(char inserted_string[], char original_string[], int position)
{	
	int i;
	for(i=0; i<position; i++) {
		putchar(original_string[i]);
	}
	
	i = 0;
	while(inserted_string[i] != '\0')
	{
		putchar(inserted_string[i]);
		++i;
	}
	i = position;
	while(original_string[i] != '\0')
	{
		putchar(original_string[i]);
		++i;
	}
	putchar('\n');


}