#include <stdio.h>
main()
{
	int first[2][3] = {16, 18, 23, 54, 91, 11};
	
	int second[2][3] = {24, 52, 77, 16, 19, 59};
	
	int i, j;
	
	int total[2][3];
	
	for(i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			total[i][j] = (first[i][j] + second[i][j]);
		}
	}
		
	printf("\n");		
	printf("      TOTAL      \n");
	printf("-----------------\n");
	printf("%d     %d     %d\n", total[0][0], total[0][1], total[0][2]);
	printf("%d     %d     %d\n", total[1][0], total[1][1], total[1][2]);
	printf("\n");
	
	



}