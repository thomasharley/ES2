#include <stdio.h>
int x = 5;
main()
{
	int x = 10;
	void fun1(void);
	printf("Inside main x = %d\n", x);
	fun1();
}
void fun1(void)
{
	int x = 15;
	void fun2(void);
	printf("Inside fun1 x = %d\n", x);
	fun2();
}
void fun2(void)
{
	printf("Inside fun2 x = %d\n", x);
}