#include <stdio.h>
main()
{
	int year;

	printf("Enter a year: \n");
	
	scanf("%d", &year);

	if(((year % 4 == 0)) || (((year % 400 == 0)) && !((year % 100) == 0)) && (year >= 0))
		printf("This year is a leap year! \n");
	else
		printf("This year is NOT a leap year! \n");
	
}