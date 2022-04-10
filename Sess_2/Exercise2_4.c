#include <stdio.h>
main()
{
	int day, month;
	
	printf("Enter the date ( day month e.g. 25 12 ) :");
	
	scanf("%i %i", &day, &month);
	
	if(day <= 31 && day >= 1 && month <= 12 && month >= 1)
	{
		if (((month == 9 || month == 4 || month == 6 || month == 11) && day >= 31) || (month == 2 && day >= 29))	
			printf("Error: Invalid Date \n");
		else
			printf("%i %i \n", day, month);
	}
	else 
		printf("Error: Invalid Date \n");
			
	}