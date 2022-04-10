#include <stdio.h>
#include <math.h>
main()
{
	
	float random_gen(float);
	
	float head_count = 0;
	float tails_count = 0;
	
	float seed;
	printf("Enter an odd 4 digit number not ending in 5: ");
	scanf("%f", &seed);
	
	int i;
	float number;
	for(i=0; i<1000; i++) {
		seed = random_gen(seed) * pow(10,4);
		number = random_gen(seed);
		//printf("%f ", number);
		if(number > 0.5) {
			head_count++;
			//printf("%d ", head_count);
		}
		else {
			tails_count++;
		}
	}
	
	float percent_heads = (head_count / 1000 * 100);
	float percent_tails = (tails_count / 1000 * 100);
	
	printf("%.2f percent heads \n", percent_heads);
	printf("%.2f percent tails \n", percent_tails);
		
}
float random_gen(float func_seed)
{
	int i;
	float number;
	i = (func_seed * ((pow(10, (4/2)))-3)) / 1.e4;
	
	number = (((func_seed * ((pow(10, (4/2)))-3)) - i*1.e4) / pow(10, 4)); 
	//printf("%f \n", number);
	return (number);
	
}