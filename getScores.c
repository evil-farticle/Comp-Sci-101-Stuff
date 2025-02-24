/* getScores.c */

#include <stdio.h>
#include <stdbool.h>

int main(void) {
	
	// 1. declare the needed integer variables here: num, n, howMany
	
	int howMany;
	int n;
	int num;
	int i;

	// 		num is for the user input
	// 		n is the return value of scanf()

	printf("\nHow many scores will you enter?  \n");
	scanf("%d", &howMany);

	int numbers[howMany];
	
// 2. write the scanf needed to get the first value entered by the user
//			and put that value into the variable num



		printf("\nEnter the scores:  \n");
		printf("Hit ctrl-d when done.\n\n");
			

// loop as long as the user entered a value and did not enter ctrl-d 
	
	for ( n = 0; n < howMany; ++n){
	
		printf("\you entered: %d\n", num);			
		scanf("%d", &num);
		numbers[n] = num;
		}		

// 3. get the next value
	
 	for ( i = 0; i < howMany; ++i) {
		
		printf("%d ", numbers[i]);
		}

	return 0;

} 

