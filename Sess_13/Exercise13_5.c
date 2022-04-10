#include <stdio.h>
main()
{	
	char str[] = "Hooray for All of Us";
	char *mess_pt;	
	mess_pt = &str[0];
	int i;

	printf("ALL ");
	for(i=0; i<20; i++) {
		printf("%c", *(mess_pt + i));
	}
	printf("\n");


}