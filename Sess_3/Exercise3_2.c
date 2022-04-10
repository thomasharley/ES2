#include <stdio.h>

main()
{
	int day, month;
	
	printf("Enter the date ( day month e.g. 25 12 ) :");
	
	scanf("%i %i", &day, &month);
	
	
	switch (month)
	{
		default:
			 printf("Invalid Date entered. Please try again\n");
		break;
		
		case 9:
		case 4:
		case 6:
		case 11:
			 if(day <= 30 && day >= 0)
			 	printf("%i %i \n", day, month);
			 else
				printf("Invalid Date entered. Please try again\n");			 
			 break;
		
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			 if(day <= 31 && day >= 0)
			 	printf("%i %i \n", day, month);
			 else
				printf("Invalid Date entered. Please try again\n");			 
			 break;
		
		case 2:
			 if(day <= 28 && day >= 0)
			 	printf("%i %i \n", day, month);
			 else
				printf("Invalid Date entered. Please try again\n");			 
			 break; 
		}
	
	
	}