#include  <stdio.h>

main()
{
	int sum = 0;						/* pointer type same as array */
	int *m_ptr;
	
	int marks[5] = { 81, 35, 72, 55, 19 };
	
	                    /* point to start of array */
	for (m_ptr = marks; m_ptr < marks + 5; *m_ptr++)
	{  /* check ptr still within bounds */
	
	printf("%d  ",*m_ptr);
	
	sum += *m_ptr;
	}



	printf("\nSum of %d marks is %d\n", 5, sum);


}