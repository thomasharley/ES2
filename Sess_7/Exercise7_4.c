#include <stdio.h>
main()
{

	int firstside, secside, thirdside, side;
	
	int triangle(int, int, int);  /* the function prototype */


	printf("Enter a side: ");
	scanf("%i", &firstside);
	printf("Now enter a second side: ");
	scanf("%i", &secside);
	printf("Now enter a third side: ");
	scanf("%i", &thirdside);

	side = triangle(firstside, secside, thirdside);  /* the function is called here */

	printf("%i\n", side);
}

int triangle(int x, int y, int z)
{
	int binary;
	
	if ((x + y > z) && (x + z > y) && (y + z > x))
		binary = 1;
	else 
		binary = 0;
		
	return binary;
}
