#include <stdio.h>
#define COUNT 5

main()
{
	int volts[COUNT], amps[COUNT], watts[COUNT];
	int *v_ptr, *a_ptr, *w_ptr; 
	int i;

	v_ptr = volts;
	a_ptr = amps;
	w_ptr = watts;
	for(i = 0; i<5; ++i) {
		printf("Enter value %d for volts: ", i+1);
		scanf("%d", (v_ptr + i));
		printf("Enter value %d for amps: ", i+1);
		scanf("%d", (a_ptr + i));
		
		watts[i] = *(v_ptr + i) * *(a_ptr + i);
	}
	
	for(i = 0; i<5; ++i) {
		printf("value %d of watts: %d \n", (i + 1), *(w_ptr + i));
	}
		
}
