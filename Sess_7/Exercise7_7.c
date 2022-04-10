#include <stdio.h>
main()
{
	float price[] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
	float quantity[] = {4.0, 8.5, 6.0, 7.35, 9.0, 15.3, 3.0, 5.4, 2.9, 4.8};
	float amount[10];

	void extend(float [], float [], float []);
	
	extend(price, quantity, amount);
	
	printf("Values of the Amount Array: ");
	int i;
	for(i=0;i<10;i++) {
		printf("%04.2f \n", amount[i]);
	}

}
void extend(float price[], float quantity[], float amount[])
{
	int i;
	for(i=0; i<10; i++) {
		amount[i] = (price[i] * quantity[i]);
		
	}



}