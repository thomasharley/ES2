#include <stdio.h>
#define NUMBER 4.54545454545454
main()
{
	float gallons, litres;
	int start, finish;
	
	printf("Enter starting amount of gallons: ");
	scanf("%i", &start);
	
	printf("Enter final amount of gallons: ");
	scanf("%i", &finish);
	
                                      
	for (gallons = start; gallons <= finish; ++gallons) {
		litres = (gallons * NUMBER);
		printf("%f Gallons = %f Litres\n",gallons, litres);               /* successive integers per iteration */
		}
	
}