#include <stdio.h>
main()
{
	float area, major_axis, minor_axis;
	
	minor_axis = 2.7; /*Define Minor Axis*/
	major_axis = 6.4;	/*Define Major Axis*/
	
	area = 3.1416 * major_axis * minor_axis;
	
	printf("Area of ellipse is %f sq. cm\n", area);
	
	}
	
	
	