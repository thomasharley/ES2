 #include <stdio.h>

main()
{
	int num1, num2, num3;
	
	num1 =  9 / 2;	/*fractional part is exactly one half */
	num2 = 17 / 4; /* fractional part is less than one half */
	num3 =  8 / 9;	/*fractional part is more than one half */
	
	printf("The first  result is %d\n", num1);
	printf("The second result is %d\n", num2);
	printf("The third  result is %d\n", num3);
	
}