#include <stdio.h>
#include <math.h>

main()
{
	int year, sales, profit, totalsales, totalprofit;
	
	printf("Year   Expected Sales    Projected Profit\n");
	printf("-----------------------------------------\n");
	
	totalsales = 0;
	totalprofit = 0;
	sales = 10000000;
                                      
	for (year = 1; year <= 10; ++year) {
		sales = (10000000 - ((year - 1) * 0.04 * sales));
		profit = (0.1 * sales);
		totalsales = totalsales + sales;
		totalprofit = totalprofit + profit;
		printf("%i           %i               %i        \n", year, sales, profit);  
		}
	
	printf("-----------------------------------------\n");	
	printf("Totals:     %i             %i        \n", totalsales, totalprofit);
	
}