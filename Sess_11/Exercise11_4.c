#include <stdio.h>
#define MAX_ENTRIES 100
main()
{
	float *print_ptr;
	float array[MAX_ENTRIES];
	
	int i = 0;
	printf("Enter list of numbers to sort: \n");
	while(EOF != scanf("%f", &array[i])) {
		i++;
	}
	
	void sort(float [i], int);
	
	sort(array, i);
	
	for(print_ptr = array; print_ptr < array + i; print_ptr++) {
		printf("%.3f ", *print_ptr);
	}
	printf("\n");
	
}
void sort(float *array_ptr, int size)
{	
	int no_swap;
	float *size_ptr, *scanning_ptr;
	void swap(float *, float *);
	
	size_ptr = (array_ptr + size - 1);
	while(--size)
	{
		no_swap = 1;
		for(scanning_ptr = array_ptr; scanning_ptr < size_ptr; scanning_ptr++) {
			if (*scanning_ptr > *(scanning_ptr + 1)) {
				swap(scanning_ptr, scanning_ptr + 1);
				no_swap = 0;
			}
		}
		if (no_swap) break;
		size_ptr--;
	}
}
void swap(float *a_ptr, float *b_ptr)
{
	int temp;
	
	temp = *a_ptr;
	*a_ptr = *b_ptr;
	*b_ptr = temp; 


}