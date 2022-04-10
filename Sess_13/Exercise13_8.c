#include <stdio.h>

#define TRUE 1
#define FALSE 0

main()
{
	int i=0;
	char *print_ptr;	
	char array[i];
	
	void sort(char *, int);
	
	printf("Enter a series of lower case characters to sort: \n");
	while(EOF != scanf("%c", &array[i])) {
		i++;
	} 
	
	sort(array, i);
	for(print_ptr = array; print_ptr < array + i; print_ptr++) 
		if(*print_ptr == *(print_ptr - 1)) {
			continue;
		}
		else {
			printf("%c ", *print_ptr);
		}
	printf("\n");

}
void sort(char *a_p, int size)
{
	int no_swap;
	char *f_p, *e_p;
	void swap(char *, char *);
	
	e_p = a_p + (size - 1);
	while (--size)
		{
			no_swap = TRUE;
			for (f_p = a_p; f_p < e_p; ++f_p)
			{
				if (*f_p < *(f_p + 1)) {
					swap(f_p, f_p + 1);
					no_swap = FALSE;
				}	
			}
			if (no_swap) break;
			e_p--;
		}
}
					
void swap(char *p_a, char *p_b)
{
	char temp;
	
	temp = *p_a;
	*p_a = *p_b;
	*p_b = temp;
}