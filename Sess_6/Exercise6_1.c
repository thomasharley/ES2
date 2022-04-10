#include <stdio.h>

main()
{
	float volts[3][3]; 
	int i, j;

	for (i = 0; i <= 2; ++i)            /* outer - ROW loop */
	{
		for (j = 0; j <= 2; ++j)      /* inner - COLUMN loop */
		{	
			printf("Enter value for row %i and column %i: ", i+1, j+1);
			scanf("%f", &volts[i][j]);     /* read in float value */
		}
	
	}
	printf("%f %f %f\n %f %f %f\n %f %f %f\n", volts[0][0], volts[0][1], volts[0][2], volts[1][0], volts[1][1], volts[1][2], volts[2][0], volts[2][1], volts[2][2]);


}