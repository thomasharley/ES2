#include <stdio.h>
struct date {
	int day;
	int month;
	int year;
};

main()
{
	struct date date1, date2, *d_ptr;
	
	struct date *later(struct date *, struct date *);

	d_ptr = &date1;
	printf("Enter Date 1 in the format DD MM YYYY: ");
	scanf("%d %d %d", &(*d_ptr).day, &(*d_ptr).month, &(*d_ptr).year);
	
	d_ptr = &date2;
	printf("Enter Date 2 in the format DD MM YYYY: ");
	scanf("%d %d %d", &(*d_ptr).day, &(*d_ptr).month, &(*d_ptr).year);
	
	d_ptr = later(&date1, &date2);
	printf("The later of the two dates is: %02d/%02d/%04d \n", (*d_ptr).day, (*d_ptr).month, (*d_ptr).year); 


}
struct date *later(struct date *date1_ptr, struct date *date2_ptr)
{	
	struct date *later_date;
	
	if((*date1_ptr).year < (*date2_ptr).year)
		later_date = date2_ptr;
	else if((*date1_ptr).year > (*date2_ptr).year)
		later_date = date1_ptr;
	else if((*date1_ptr).month < (*date2_ptr).month)
		later_date = date2_ptr;
	else if((*date1_ptr).month > (*date2_ptr).month)
		later_date = date1_ptr;
	else if((*date1_ptr).day < (*date2_ptr).day)
		later_date = date2_ptr;
	else if((*date1_ptr).day > (*date2_ptr).day)
		later_date = date1_ptr;
	else 
		later_date = date1_ptr;
		
		
	return(later_date);
}
	
	