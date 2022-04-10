#include <stdio.h>

main()
{
	int tots_secs, hr, min, sec;
	void time(int, int *, int *, int *);
	
	printf("Enter value for total seconds: ");
	scanf("%i", &tots_secs);
	
	time(tots_secs, &hr, &min, &sec);
	
}
void time(int tots_secs, int *hr_p, int *min_p, int *sec_p)
{
	*hr_p = (tots_secs / 3600);
	*min_p = (tots_secs%3600)/60;
	*sec_p = (tots_secs%3600)%60; 
	printf("%ihrs, %imins, %isecs \n", *hr_p , *min_p , *sec_p);
}