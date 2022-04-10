#include <stdio.h>
#define COUNT 5

main()
{
	int volts[COUNT], amps[COUNT], watts[COUNT];
	
	int i;
	for(i=0; i<COUNT; i++) { /* reads in values for volts array */
		printf("Enter value %d of volts: ", i+1);
		scanf("%d", &volts[i]);
	}
		
	for(i=0; i<COUNT; i++) { /* reads in values for amps array */
		printf("Enter value %d of amps: ", i+1);
		scanf("%d", &amps[i]);
	}
		
	void power(int [COUNT], int [COUNT], int [COUNT]); /* prototype of multiplication function */
	
	power(volts, amps, watts); /* call the function */
	
	for(i=0; i<COUNT; i++) { /* prints values of watts */
		printf("Value %d of watts: %d\n", i+1, watts[i]);
	}	
}
void power(int *v_ptr, int *a_ptr, int *w_ptr)
{
	int j;
	
	for(j=0; j<COUNT; j++) { /* cycles through and computes multiplication */
		(*w_ptr++) = (*v_ptr++) * (*a_ptr++);
	}
}
	
