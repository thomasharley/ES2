#include <stdio.h>
main()
{
	int i, elements;
	
	float minn;
	
	float find_min(float[], int);
	
	printf("Enter the number of elements you want in your array: ");
	scanf("%i", &elements);
	
	float array[elements];
	{
		for (i = 1; i <= elements; i++) {
			printf("Enter number for value %i: ", i);
			scanf("%f", &array[i-1]);
			
		}
	}
	
	minn = find_min(array, elements);
	
	printf("Smallest value in array is %f\n", minn);
}

float find_min(float x[0], int elements)

{
	int y;
	float min = x[0];
	
	for (y = 1; y < elements; y++) {
		
		if(min >= x[y]) 
			{
			min = x[y];
			}
	}	
	return min;
}


