#include <stdio.h>
main()
{

	float firstnum, secnum, minnum;
	float find_min(float, float);  /* the function prototype */


	printf("Enter a number: ");
	scanf("%f", &firstnum);
	printf("Now enter a second number: ");
	scanf("%f", &secnum);

	minnum = find_min(firstnum, secnum);  /* the function is called here */

	printf("The minimum of the two numbers is %f\n", minnum);
}

float find_min(float x, float y)
{
	float min;
	
	if (x > y)
		min = y;
	else
		min = x;
		
	return min;
}

