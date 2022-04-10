#include <stdio.h>
main()
{

	float firstnum, secnum, thirdnum, minnum;
	float find_min(float, float, float);  /* the function prototype */


	printf("Enter a number: ");
	scanf("%f", &firstnum);
	printf("Now enter a second number: ");
	scanf("%f", &secnum);
	printf("Now enter a third number: ");
	scanf("%f", &thirdnum);

	minnum = find_min(firstnum, secnum, thirdnum);  /* the function is called here */

	printf("The minimum of the three numbers is %f\n", minnum);
}

float find_min(float x, float y, float z)
{
	float min;
	
	if ((x > y) && (z > y))
		min = y;
	else if ((x < y) && (x < z))
		min = x;
	else 
		min = z;
		
	return min;
}
