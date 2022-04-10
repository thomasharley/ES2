#include <stdio.h>
#define NAMELEN 30
#define INITLEN 5
#define DEGLEN 50
#define USERLEN 30
#define MAX 100
#define STOP 1
#define MORE 0
struct student {
	char surname[NAMELEN + 1];
	char initials[INITLEN + 1];
	long matric;
	char programme[DEGLEN + 1];
	char username[USERLEN + 1];
	struct student *next;

};
main()
{
	int number;
	struct student students[MAX];
	struct student *sp;
	struct student *first = NULL;
	
	int input_rec(struct student *);
	void output_rec(struct student *);
	struct student *insert_rec(struct student *, struct student *);
	int delete_rec(struct student *, int);
	
	printf("Enter student name, initials, matriculation number, degree & user\n");
	printf("each on a seperate line - terminate with EOF\n");
	
	for (number = 0; number < 5; ++number)
	{
		if (STOP == input_rec(&students[number])) break;
		else {
				first = insert_rec(first, &students[number]);
		}
	}
	
	long matric_no;
	printf("Enter the Matriculation Number of the record to delete: ");
	scanf("%ld", &matric_no);
	
	int deleted_rec;
	deleted_rec = delete_rec(first, matric_no); 	
	//printf("\n%d", deleted_rec);
	printf("\nNAME    	 MATRIC NO.	 DEGREE		    USERNAME\n");
	for (sp = first; sp < sp + 5; sp = sp->next) 
	{
		if(sp->matric == (sp + deleted_rec - 1)->matric) 
		{
			printf("it happened\n");
			continue;
		}
		else 
		{
			output_rec(sp);
		}
	}
}
int input_rec(struct student *s_in)
{
	char line[MAX +1];
	
	printf("Name: ");
	if (gets(s_in->surname) != NULL)
	{
		printf("Initials: ");
		if(gets(s_in->initials) != NULL)		
		{
			printf("Matriculation No: ");
			if(gets(line) != NULL)
			{
				sscanf(line, "%ld", &s_in->matric);
				printf("Degree: ");
				if(gets(s_in->programme) != NULL)
				{
					printf("Username: ");
					if(gets(s_in->username) != NULL) return MORE;
				}
			}
		}
	}
	return STOP;
}
void output_rec(struct student *s_out)
{
		printf("%s %-10s%07ld        %-20s %-5s\n", s_out->surname, s_out->initials, s_out->matric, s_out->programme, s_out->username);
}
struct student *insert_rec(struct student *start_p, struct student *new_p)
{
	struct student *cur_p;

	if(NULL == start_p) {
		new_p->next = NULL;
		start_p = new_p;
	} else 
	if(strcmp(start_p->surname, new_p->surname) > 0) {
		new_p->next = start_p;
		start_p = new_p;
	} else {
		cur_p = start_p;
		while (NULL != cur_p->next) {
			if(strcmp(cur_p->next->surname, new_p->surname) >0) {
				new_p->next = cur_p-> next;
				cur_p->next = new_p;
				break;
			} else {
				cur_p = cur_p->next;
			}
		}
		if(NULL == cur_p->next) {
			new_p->next = NULL;
			cur_p->next = new_p;
		}
	}
	return start_p;
}
int delete_rec(struct student *start_ptr, int matricno)
{
	struct student *cur_p;
	struct student *end_ptr;
	int count = 0;
	
	end_ptr = (start_ptr + 4);
	
	for(cur_p = start_ptr; cur_p < end_ptr; cur_p++) {
		if(cur_p->matric == matricno) {
			//printf("%d", count);
			return count;
		}	
		else {
			//printf("%d <-- this is every count\n", count);
			count++;
		}
				
	}
}
		
