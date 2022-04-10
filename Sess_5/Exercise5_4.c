#include <stdio.h>
main()
{
	int input, total, i, average, largest, smallest;
	
	i = 0;
	total = 0;
	largest = 0;
	input = 0;
	smallest = 1000;
	
	
	while(input >= 0)
	{
		printf("Enter positive integer number %d: ", i+1);
		scanf("%d", &input);
		
		if(input < 0)
		{
			break;
		}
		
		if(input > 100)
		{
			printf("ERROR, ERROR, Number too large, Please re-enter \n");
			continue;	
		}
		i++;
		
		
		if (input > largest)
			largest = input;
		else 
			largest = largest;
			
		if (input < smallest)
			smallest = input;
		else 
			smallest = smallest;
			
			
		total = total + input;
	}

	
	average = (total / i);
	printf("Largest number entered was: %d \n", largest);
	printf("Smallest number entered was: %d \n", smallest);
	printf("Average of all numbers entered was %d \n", average);
	
	
	
	
	
	
	
	
	
	
	
	
	
}