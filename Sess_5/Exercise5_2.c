#include <stdio.h>
main()
{
	long input, factorial;
	int i;
	
	printf("Enter a number: ");
	scanf("%ld", &input);
	
	factorial = input;
	i = 1;
	do 
	{
	   factorial = factorial * (input - i);
		i++;
	}
	while((input - i) > 1);
	


	
	printf("The factorial of your number is: %ld \n", factorial);


}
