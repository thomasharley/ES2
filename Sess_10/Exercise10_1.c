#include <stdio.h>

void main()
{
	int a, b, output;
	int swap(int *, int *);
	
	printf("Enter value for first variable: ");
	scanf("%i", &a);
	printf("Enter value for second variable: ");
	scanf("%i", &b);
	
	output = swap(&a, &b);
	printf("%i \n", output);
	
}
int swap(int *p_a, int *p_b)
{
	if(*p_a > *p_b) {
		int temp;
		temp = *p_a;
		*p_a = *p_b;
		*p_b = temp;
		return 1;
	}
	else {
		return 0;
	}
}
