#include <stdio.h>
main()
{
	int miles[] = {15, 22, 16, 18, 27, 23, 20};
	int dist[] = {0, 0, 0, 0, 0, 0, 0};
		
	int i;
	printf("\nBefore Copy: \n");
	printf("Miles: ");
	for(i=0; i<7; i++) {
		printf("%d ", miles[i]);
	}
	printf("\n");
	printf("Dist: ");
	for(i=0; i<7; i++) {
		printf("%d ", dist[i]);
	}
	printf("\n \n");
	
	
	int *m_ptr, *d_ptr;
	
	m_ptr = miles;
	d_ptr = dist;

	while(m_ptr < miles + 7) {
		int temp;
		
		temp = *m_ptr;
		*d_ptr = temp;
		
		*m_ptr++;
		*d_ptr++;
	}
		
	printf("After Copy: \n");
	printf("Miles: ");
	for(i=0; i<7; i++) {
		printf("%d ", miles[i]);
	}
	printf("\n");
	printf("Dist: ");
	for(i=0; i<7; i++) {
		printf("%d ", dist[i]);
	}
	printf("\n");


}