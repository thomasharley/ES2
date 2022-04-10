#include <stdio.h>
main()
{
	
	float R1, R2, R3, V1, V2, I1, I2, I3; /* Define the Variables for the Program */
	
	R1 = 10.0;	/* Store 10 in R1 */
	R2 = 4.0; /* Store 4 in R2 */
	R3 = 6.0; /* Store 6 in R3 */
	V1 = 12.0; /*Store 12 in V1 */
	V2 = 9.0; /* Store 9 in V2 */
	
	I1 = ((V2 * R3) + (V1 * (R2 + R3)))/((R1 + R3) * (R2 + R3) - (R3 * R3)); /* Calculate I1 */
	
	I2 = ((V1 * R3) + (V2 * (R1 + R3)))/((R1 + R3) * (R2 + R3) - (R3 * R3)); /* Calculate I2 */
	
	I3 = (I1 - I2); /* Calculate I3 */
	
	printf("I1 = %f I2 = %f I3 = %f\n", I1, I2, I3);
	
	}
	