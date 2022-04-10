#include <stdio.h>

main()
{
	float R1, R2, R3, R4, R5, R6, Rtop, Rab; /* Define the Variables */	

	printf("Enter value for R1: "); /* Prompts for value of R1 */
	
	scanf("%f", &R1); /* Writes value of R1 in */
	
	printf("Enter value for R2: "); /* Prompts for value of R2 */
	
	scanf("%f", &R2); /* Writes value of R2 in */
	
	printf("Enter value for R3: "); /* Prompts for value of R3 */
	
	scanf("%f", &R3); /* Writes value of R3 in */
	
	printf("Enter value for R4: "); /* Prompts for value of R4 */
	
	scanf("%f", &R4); /* Writes value of R4 in */
	
	printf("Enter value for R5: "); /* Prompts for value of R5 */
	
	scanf("%f", &R5); /* Writes value of R5 in */
	
	printf("Enter value for R6: "); /* Prompts for value of R6 */
	
	scanf("%f", &R6); /* Writes value of R6 in */
	
	Rtop = (((R1*R2)/(R1+R2))+R3+((R4*R5)/(R4+R5))); /* Defines the value of Rtop */
	
	Rab = ((Rtop*R6)/(Rtop+R6)); /* Defines value of total resistance */
	
	if(Rab <= 9999.99 && Rab >= 0) /* if-else statement */
		printf("The Resistance between A & B is %07.2f Ohm \n", Rab); /* prints total resistance in the form xxxx.xx */
	else 
		printf("The Resistance between A & B is ----.-- Ohm \n"); /* if Rab above 9999.99 or less than 0, prints ----.-- */
	
	}