#include <stdio.h>
#include <math.h>
main()
{
	float angle, radian;
	
	printf("To stop entering angles, press the Control and D keys.\n\n");

	printf("Enter an Angle (in degrees): ");                /* Initial prompt */
	
	while (EOF != scanf("%f", &angle)) {
		radian = (angle * (3.1415 / 180));
		printf("The Sine of the Angle is %f\n", sin(radian));
		printf("The Cos of the Angle is %f\n", cos(radian));
		printf("The Tan of the Angle is %f\n", tan(radian));
		printf("Enter an Angle (in degrees): \n"); /* subsequent prompts */
		
	}
}