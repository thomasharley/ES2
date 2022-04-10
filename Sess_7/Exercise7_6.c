#include <stdio.h>
main()
{
	int array[3][3];
	int i;
	
	printf("Enter values for a three by three array, one row at a time: \n");
	for(i=0; i<3; i++) {
		scanf("%d %d %d", &array[i][0], &array[i][1], &array[i][2]);	
	}
		
	void display(int [3][3]);
	
	display(array);
}
void display(int array[3][3])
{

	int i, j;
	printf("Printed Array: \n");
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}