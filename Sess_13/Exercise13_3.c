#include <stdio.h>
#define LENGTH 50
#define TRUE 1
#define FALSE 0
struct student {
	char surname[LENGTH + 1];
	char initials[LENGTH + 1];
	long matric;
	char programme[LENGTH + 1];
	char username[LENGTH + 1];

};
main()
{
struct student students[5], *str_ptr;

int check_surname(struct student *, char *);


int i;
for(i=0; i<5; i++) {
	printf("Surname: ");
	scanf("%s", students[i].surname);
	
	printf("Initials: ");
	scanf("%s", students[i].initials);
	
	printf("Matriculation No: ");
	scanf("%ld", &students[i].matric);
	
	printf("Degree Programme: ");
	scanf("%s", students[i].programme);
	
	printf("Username: ");
	scanf("%s", students[i].username);
}

for(str_ptr = &students[0]; str_ptr < &students[4]; str_ptr++) {
	if(check_surname(str_ptr, "Smith") == 1)
	{
		printf("\nName:\t%s %s\n", (*str_ptr).initials, (*str_ptr).surname);
		printf("Matriculation No: %ld\n", (*str_ptr).matric);
		printf("Degree Course:\t%s\n", (*str_ptr).programme);
		printf("UserName:\t%s\n", (*str_ptr).username);
	}
}
}
int check_surname(struct student *student_ptr, char *name)
{
	if (strcmp((*student_ptr).surname, name) == 0)
		return(TRUE);
	else 
		return(FALSE);
}