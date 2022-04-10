#include <stdio.h>
#define NUMBER 4.54545454545454
main()
{
	float gallons, litres;

	gallons = 10;                /* counting integers start at ten */
	while (gallons <= 20)
	{
		litres = (gallons * NUMBER);
		printf("%f Gallons = %f Litres\n",gallons, litres);
		gallons += 1;                /* successive integers per iteration */
	}
	
}