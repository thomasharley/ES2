#include <stdio.h>
#include <math.h>
main()
{

	float num, fact;
	float factorial(float);           /* function prototype */

	printf("Enter a number which you want the factorial for: ");      /* prompt for input */
	scanf("%f", &num);            /* read in a number */


	fact = factorial(num);            /* call fracpart */
	
	printf("The factorial of %f is %f\n", num, fact);  /* print result */
}

float factorial(float x)
{
	float fact, n;
	
	n = (x - 1);
	do{
	x = x * n;
	--n;	
	}
	while(n>0);
	
	fact = x;
	
	return fact;
}