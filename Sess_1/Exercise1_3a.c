#include <stdio.h>

main()
{
	float num1, num2, num3;
	
	num1 =  9 / 2;	/*fractional part is exactly one half */
	num2 = 17 / 4; /* fractional part is less than one half */
	num3 =  8 / 9;	/*fractional part is more than one half */
	
	printf("The first  result is %f\n", num1);
	printf("The second result is %f\n", num2);
	printf("The third  result is %f\n", num3);
	
	}