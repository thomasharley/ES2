#include <stdio.h>

main()
{
	float M;
	
	printf("Enter Student Mark: ");
	scanf("%f", &M);
	
	if	(M < 70)
	{
		if (M < 25)
			printf("G \n");
		if (M < 35 && M >= 25)
			printf("F \n");
		if (M < 40 && M >= 35)
			printf("E \n");
		if (M < 50 && M >= 40)
			printf("D \n");
		if (M < 60 && M >= 50)
			printf("C \n");
		if (M < 70 && M >= 60)
			printf("B \n");
	}
	else 
		 printf("A \n");
	
	}
	
				