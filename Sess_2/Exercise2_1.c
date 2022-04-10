#include <stdio.h>
main()
{
	
	float R1, R2, R3, V1, V2, I1, I2, I3; /* Define the Variables for the Program */
	
	printf("Please type in a number for R1: ");
	
	scanf("%f", &R1);
	
	printf("Please type in a number for R2: ");
	
	scanf("%f", &R2);
	
	printf("Please type in a number for R3: ");
	
	scanf("%f", &R3);
	
	printf("Please type in a number for V1: ");
	
	scanf("%f", &V1);
	
	printf("Please type in a number for V2: ");
	
	scanf("%f", &V2);
	
	
	I1 = ((V2 * R3) + (V1 * (R2 + R3)))/((R1 + R3) * (R2 + R3) - (R3 * R3)); /* Calculate I1 */
	
	I2 = ((V1 * R3) + (V2 * (R1 + R3)))/((R1 + R3) * (R2 + R3) - (R3 * R3)); /* Calculate I2 */
	
	I3 = (I1 - I2); /* Calculate I3 */
	
	printf("I1 = %f I2 = %f I3 = %f\n", I1, I2, I3);
	
	}