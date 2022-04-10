#include <stdio.h>
#define A 'A'
#define B 'B'
#define C 'C'
#define D 'D'
#define E 'E'
#define F 'F'
#define G 'G'
#define H 'H'

main()
{
	char GRADE;
	
	printf("Enter Student Grade: ");
	scanf("%c", &GRADE);


	switch (GRADE)
	{
		default:
			printf("Invalid Grade (Not A-H)\n");
		break;
			
		case A:
			printf("A Grade represents a mark between 70-100\n");
		break;
		
		case B:
			printf("B Grade represents a mark between 60-69\n");
		break;
		
		case C:
			printf("C Grade represents a mark between 50-59\n");
		break;
		
		case D:
			printf("D Grade represents a mark between 40-49\n");
		break;
		
		case E:
			printf("E Grade represents a mark between 30-39\n");
		break;
		
		case F:
			printf("F Grade represents a mark between 20-29\n");
		break;
		
		case G:
			printf("G Grade represents a mark between 10-19\n");
		break;
		
		case H:
			printf("H Grade represents a mark between 0-9\n");
		break;
	
	
	
	
	
	}


}