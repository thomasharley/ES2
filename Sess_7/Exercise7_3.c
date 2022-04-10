#include <stdio.h>
#include <math.h>
main()
{

	float num, frac;
	float fracpart(float);           /* function prototype */

	printf("Enter a number: ");      /* prompt for input */
	scanf("%f", &num);            /* read in a number */


	frac = fracpart(num);            /* call fracpart */
	
	printf("Fractional part is %f\n", frac);  /* print result */
}

float fracpart(float x)
{
	float fraction;
	
	int integer;
	
	integer = x;
	
	fraction = (x - integer);
	
	return fraction;





}