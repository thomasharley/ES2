#include <stdio.h>

main()
{
	float R1, R2, R3, Rt; /* Define the Variables */	

	printf("Enter value for R1: ");
	
	scanf("%f", &R1);
	
	printf("Enter value for R2: ");
	
	scanf("%f", &R2);
	
	printf("Enter value for R3: ");
	
	scanf("%f", &R3);
	
	Rt = 1/((1/R1)+(1/R2)+(1/R3));
	
	printf("Combined resistance is %f ohms \n", Rt);
		
	
	}