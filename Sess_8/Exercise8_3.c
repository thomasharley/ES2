#include <stdio.h>
main()
{
	int i, max;
	int array[10] = { 1, 10, 5, 34, 34, 57, 72, 93, 3, 27};
	int biggest(int);
	for (i = 0; i < 10; ++i) {
		max = biggest(array[i]);
	}
	printf("Biggest value in array is %d\n", max);
}

int biggest(int val)
{
	static int big = 0;
	
	if (val > big) {
		big = val;
	}
	return big;
}


