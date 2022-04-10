#include <stdio.h>
main()
{
	int amps[8], i, j, total;
	
	total = 0;
	
	for(i = 1; i <= 8; i++)
	{
		printf("Enter element %d of array Amps: ", i);
		scanf("%d", &amps[i-1]);
		total = (total + amps[i-1]);
	}
	
	for(j = 1; j <= 8; j++)
	{
		printf("%d, ", amps[j-1]);
	}
	
	printf("\nAverage amp value is: %d \n", (total / 8));


}