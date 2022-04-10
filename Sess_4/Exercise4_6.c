#include <stdio.h>
#include <math.h>

main()
{
	int prime, number, test1;
	float test;
	
	test1 = 0;
	
	printf("Enter a Number to Check if it is prime: ");
	scanf("%i", &prime);
	
	for(number = 2; number < prime; ++number) {
		test = (prime % number); 
		
		if(test == 0)
			(++test1);	
		else 
			sleep(0);
	}
	
	if(test1 > 0)
		printf("Number is NOT prime! \n");
	else 
		printf("Number is Prime! \n");
}