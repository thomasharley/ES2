#include <stdio.h>

main()
{
	int count;
	float num, total;
	
	count = 0;                    /* nothing read initially */
	total = 0.0;
	num = 0.0;

	while (num <= 100) {
		printf("Enter a number: ");
      scanf("%f", &num);
		total += num;
		++count;
	}
	printf("\nTotal is %6.1f, Average is %4.1f\n", total, total/count);
}