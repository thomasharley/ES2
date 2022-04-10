#include <stdio.h>
#include <math.h>

main()
{
	
	float seed;
	printf("Enter an odd 4 digit number not ending in 5: ");
	scanf("%f", &seed);
	
	float random_gen(float);
	int i;

	for(i=0; i<10; i++) {
		seed = random_gen(seed);
		printf("%04.0f \n", seed);
	}
}
float random_gen(float func_seed)
{
	int i;
	i = (func_seed * ((pow(10, (4/2)))-3)) / 1.e4;
	
	return ((func_seed * ((pow(10, (4/2)))-3)) - i*1.e4); 



}