#include <stdio.h>

main()
{
	float M;
	
	printf("Enter Student Mark: ");
	scanf("%f", &M);
	
	if (M < 25)
		printf("G \n");
	else if (M < 35 && M >= 25)
		printf("F \n");
	else if (M < 40 && M >= 35)
		printf("E \n");
	else if (M < 50 && M >= 40)
		printf("D \n");
	else if (M < 60 && M >= 50)
		printf("C \n");
	else if (M < 70 && M >= 60)
		printf("B \n");
	else 
		printf("A \n");
	}