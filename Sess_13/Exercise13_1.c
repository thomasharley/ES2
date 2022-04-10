#include <stdio.h>

struct date {
	int day;
	int month;
	int year;
	int hours;
	int minutes;
	int seconds;
}

main()
{
struct date a_date;

printf("Enter the date and time: ");
scanf("%d %d %d %d %d %d", 
		&a_date.day,
		&a_date.month,
		&a_date.year,
		&a_date.hours,
		&a_date.minutes,
		&a_date.seconds);
		
if((a_date.month == 2 && a_date.day > 28) || a_date.day < 1)
	printf("Error: Invalid Date and Time \n");
else if((a_date.day > 30 && a_date.month == 9) || (a_date.day > 30 && a_date.month == 4) || (a_date.day > 30 && a_date.month == 6) || (a_date.day > 30 && a_date.month == 11) || a_date.day < 1)
	printf("Error: Invalid Date and Time \n");
else if(a_date.month > 12 || a_date.month < 1 || a_date.day > 31 || a_date.day < 1 || a_date.hours > 23 || a_date.hours < 0 || a_date.seconds > 59 || a_date.seconds < 0 || a_date.minutes > 59 || a_date.minutes < 0)
	printf("Error: Invalid Date and Time \n");
else {
	printf("%02d-%02d-%02d %02d:%02d:%02d \n", 
		a_date.day,
		a_date.month,
		a_date.year,
		a_date.hours,
		a_date.minutes,
		a_date.seconds);

}
}
		 
	
