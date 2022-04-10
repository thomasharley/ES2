#include <stdio.h>
#define LENGTH 50
struct student {
	char surname[LENGTH + 1];
	char initials[LENGTH + 1];
	long matric;
	char programme[LENGTH + 1];
	char username[LENGTH + 1];

};
main()
{
struct student students[5];

int i;
for(i=0; i<1; i++) {
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

for(i=0; i<1; i++) {
	printf("\nName:\t%s %s\n", students[i].initials, students[i].surname);
	printf("Matriculation No: %ld\n", students[i].matric);
	printf("Degree Course:\t%s\n", students[i].programme);
	printf("UserName:\t%s\n", students[i].username);
}


}
