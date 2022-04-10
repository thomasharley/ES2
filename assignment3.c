#include <stdio.h>
main()
{
	int size; /* defines integer to hold matrix dimension */
	
	do	{     /* catches any weird matrix dimension entries and forces user to re-enter */
		printf("Enter the dimension of the square matrix: ");
		scanf("%d", &size);
	}
	while(size < 1 || size > 5);
	
	int matrix[size][size];    /* declares the array (the matrix) */

	int i, j; /* counter variables for loops */
		
	printf("Now enter values %d rows by %d columns\n", size, size); /* prints message to prompt for entry */
	
	for (i = 0; i < size; i++)
	{
		j = 0;
		while (j < size && scanf("%d", &matrix[i][j]) == 1) /* this loop fills the matrix */
			j++;
	}
	
	int determinant; /* initialise determinant variable */
	
	void compute_inverse(int, int, int [size][size]); /* prototype for compute_inverse function */
	
	int compute_determinant(int, int [size][size]); /* prototype for compute_determinant function */
	
	determinant = compute_determinant(size, matrix); /* calls compute_determinant function to find determinant and assign it to an integer variable */
	if(determinant == 0)
		printf("The matrix is singular\n"); /* prints statement and terminates program */
	else {
		compute_inverse(determinant, size, matrix); /* calls function to compute determinant */	
	}
}
int compute_determinant(int size, int matrix[size][size]) /* function to compute the determinant, works recursively, for a 5x5, continues to compute cofactors until finds cofactors 2x2 in size */
{ 																			/* solves 2x2 determinant and uses answers to find determinant of 3x3, 4x4, etc. */

	void cofactor_matrix(int, int[size][size], int[size-1][size-1], int, int); /* prototype for cofactor function */
	
	if (size == 2) { /* find determinant if dimension 2x2 */
		return (matrix[0][0]*matrix[1][1]) - (matrix[0][1]*matrix[1][0]);
	}
	else if (size == 1) { /* find determinant if dimension 1x1 */
		return matrix[0][0];
	}
	else { /* find determinant for all other dimensions */
		;
	}	
	int result = 0; /* stores determinant result */
	int add = 1; /* keeps track of whether to add or subtract */
	
	int j;
	j=0;
	while(j<size) { /* while statement to loop through all the columns on top row */
		int new[size-1][size-1];
		cofactor_matrix(size, matrix, new, j, 0); /* calls cofactor function to find relevant cofactor for the column loop is currently on */
		if(add == 1) {
			result += matrix[0][j]*(compute_determinant(size - 1, new)); /* calls compute determinant function again to compute determinant of current co factor, multiplies it by current top row value */
			/* thus looping us back to the top */
			add = 0;
		}
		else {
			result -= matrix[0][j]*(compute_determinant(size - 1, new)); /* calls compute determinant function again to compute determinant of current co factor, multiplies it by current top row value */
			//printf("%d", new[1][0]);												/* thus looping us back to the top */
			add = 1;
		}		
		j++;
	}
	return result; /* returns determinant to where the function was called */	
}
void cofactor_matrix(int size, int original_matrix[size][size], int new_matrix[size-1][size-1], int x_position, int y_position) /* function that finds cofactors of values in the matrix */
{
	int i, j, a, b; /* some counting integers for the loops */
	a = 0; /* setting to 0 */
	b = 0; /* setting to 0 */
	
	for(i=0; i<size; i++) {
		if(i == y_position) /* excludes row currently on */
			continue; /* back to the top, with 1 added */
		else {
			;	
		}
		for(j=0; j<size; j++) {
			if(j == x_position) /* excludes column currently on */
				continue; /* back to the top with 1 added */
			else {
				;	
			}
			new_matrix[a][b] = original_matrix[i][j]; /* write values of the co factor to a new matrix, so we can use co factors outside this function */
			b++; /* adds one to the column of the new matrix so we are mapping the data correctly from original_matrix to new_matrix */
		}
		b = 0; /* resets b */
		a++;  /* adds one to the row of the new matrix so we are mapping the data correctly from original_matrix to new_matrix */
	}	
}
void compute_inverse(int determinant, int size, int matrix[size][size]) /* function to compute the inverse */
{
	float inverse_matrix[size][size]; /* initialise array to hold inverse that will be printed */
	
	int i, j; /* counting integers for for loops */
	int positive = 1; /* keep track of whether to multiply by minus 1 or not, 1 means no, 0 means yes */
	int new[size-1][size-1]; /* array to hold cofactors */
	
	if(size == 1) { /* print inverse if matrix is 1x1 */
		printf("The inverse of the matrix is:\n");
		printf("%.4f\n", (1.0 / determinant));
	}
	else { /* every other dimension case */
		for(i=0; i<size; i++) {
			for(j=0; j<size; j++) {
				cofactor_matrix(size, matrix, new, j, i); /* finds cofactors */
				if(positive == 1) {
					inverse_matrix[i][j] = compute_determinant(size-1, new); /* finds determinant of co factors */
					positive = 0;
				}
				else if(positive == 0 && size == 2 && i == 0 && j == 1) { /* swaps around the minuses for the 2x2 case as its slightly different to the larger cases */
					inverse_matrix[i][j] = -(compute_determinant(size-1, new)); /* finds determinant of co factors */
					positive = 0;
				}
				else {
					inverse_matrix[i][j] = -(compute_determinant(size-1, new)); /* finds determinant of co factors and multiplies by minus 1 */
					positive =  1;	
				}			
			}
		}
		printf("The inverse of the matrix is:\n"); 
		for(i=0; i<size; i++) {
			for(j=0; j<size; j++) {
				printf("%.4f ", (1.0 / determinant)*inverse_matrix[j][i]); /* this block uses for loop within for loop to print off the transpose of determinant matrix multiplied by 1 over the determinant */
			}
			printf("\n");
		}			
	}
}
