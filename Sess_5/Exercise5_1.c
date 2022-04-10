#include <stdio.h>
#include <math.h>

#define Game 3
#define Team 5

main()
{
	int game_number, bowler_number, bowler_score, bowler_total, total_score;
	float bowler_average, total_average;
	
	total_score = 0;
	for(bowler_number = 1; bowler_number <= Team; ++bowler_number)
	{
		bowler_total = 0;
		for(game_number = 1; game_number <= Game; ++game_number)
		{
			printf("Enter Score for Bowler %i, Game %i: ", bowler_number, game_number);
			scanf("%i", &bowler_score);
			bowler_total = bowler_total + bowler_score;					
			
		}
		bowler_average = bowler_total / Game;
		printf("Bowler %i's average is %f\n", bowler_number, bowler_average);
		total_score = total_score + bowler_total;
	}		 
	total_average = total_score / (Team * Game);
	printf("The Average Team Score is %f\n", total_average);
}













