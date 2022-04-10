#include <stdio.h>

main()
{
	int bit, count, space, mark, data; /* Define Integer Variables */
	
	count = 0; /* Initialise integer 'count' which counts how many successful start sequences have been entered */
	space = 0; /* Initialise integer 'space' which counts how many 0 bits have been entered of the start sequence */
	mark = 0; /* Initialise integer 'mark' which counts how many 1 bits have been entered of the start sequence */
	data = 0; /* Initialise integer 'data' which counts how far through the 8 bit data word payload the program is */
	
	while (EOF != scanf("%i", &bit)) { /* While loop will terminate when Control + D entered */
	
		
		while (bit == 0) { /* when a 0 or 'space' (false) bit is entered */
		
			if(mark == 0) { /* no marks have been entered, increases 'space' bit count by one */
				++space;
				break;
			}
			
			else if(mark == 1) { /* one mark has been entered, sequence must reset as 2 marks weren't entered before final space */
				mark = 0; /* resets */
				space = 1; /* sets to 1 as the 0 bit just entered counts as the first in a new potential sequence */
				break;
			}
			
			else if(mark == 2) { /* two marks have been entered successfully, this is the final space, sequence completes */
				++count; /* adds 1 to successful start sequence counter */
				space = 0; /* resets to begin again */
				mark = 0; /* resets */
				data = 0; /* set data counter to 0 */
				
				while (data<=7) { /* this loops for 8 bit inputs (data payload) before completing, program then resumes searching for start sequence */
					if (EOF != scanf("%i", &bit)) { /* allows user to terminate program mid data word payload */
						data += 1;
					}
					else {
						printf("Number of valid start sequences is %i\n", count); /* prints output and terminates program mid data word payload */
						return 1;	
					}
					
					
				}
				break;
			}
			
			else { /* catches anything else */
				break;
			}
			
		}
		
		
		
		
		
		while (bit == 1) { /* when a 1 or 'mark' (true) bit is entered */
		
			if(space >= 4 && mark <= 1) { /* first four spaces have been entered and 0 or 1 marks have been entered */
				++mark; 
				break;
			}
			
			else if(mark == 2) { /* both marks have been entered already, sequence fails here as third mark is entered, resets */
				mark = 0; /* resets */
				space = 0; /* resets */
				break;
			}
			
			else if(space < 4) { /* not enough spaces have been entered before first mark, sequence resets */
				space = 0;
				space = 0;
				mark = 0;
				break;
			}
			
			else /* catches anything else */
				break;
		}
		
		
	}				
						
	printf("Number of valid start sequences is %i\n", count); /* prints number of successful start sequences */

}









