#include <stdio.h>
main()
{
	int input, total, i, average, largest;
	
	i = 0;
	total = 0;
	largest = 0;
	input = 0;
	
	
	while(input >= 0)
	{
		printf("Enter positive integer number %d: ", i+1);
		scanf("%d", &input);
		
		if(input < 0)
		{
			break;
		}
		i++;
		
		
		if (input > largest)
			largest = input;
		else 
			largest = largest;
			
			
		total = total + input;
	}

	
	average = (total / i);
	printf("Largest number entered was: %d \n", largest);
	printf("Average of all numbers entered was %d \n", average);
	
	
	
	
	
	
	
	
	
	
	
	
	
}