#include <stdio.h>
main()
{
	float slope[] = {17.24, 25.63, 5.94, 33.92, 3.71, 32.84, 35.93, 18.24, 6.92};
	
	float test[] = {5.4, 10.2, 11.5, 9.3, 101.5};
	
	float min, max;
	
	float find_max(float [], int);
	
	float find_min(float [], int);
	
	max = find_max(slope, 9);
	
	min = find_min(slope, 9);
	
	printf("The maximum value of the array is: %f \n", max);
	
	printf("The minimum value of the array is: %f \n", min);
	
	


}
float find_max(float array[], int size)
{
	int i;
	float max = array[0];
	
	for(i=1; i<size; i++)
	{
		if(max < array[i]) {
			max = array[i];
		}
	}
	return max;	
}
float find_min(float array[], int size)
{
	int i;
	float min = array[0];
	
	for(i=1; i<size; i++)
	{
		if(min > array[i]) {
			min = array[i];
		}
	}
	return min;
}