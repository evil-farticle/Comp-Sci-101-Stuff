/* errors.c
	Suren Juliano
	CpSc 1011, Section 3 , Spring 2025
	Due 1/24/25
	Part 2 of Lab #2
	Fixing the errors in the file.
*/

/* 1. This stdio.h had quotation marks '"' instead of arrows "< , >" */

#include <stdio.h>

/* 2 and 3 Int main needs to be followed by parentheses in this situation. Also no 
starting bracket is here. */

int main(void)
{

/* 4. int is capitalized. */

	int sum;

/* 5 and 6. Comment section doesnt end after 'result'. No semicolon after '2' */

	/* compute result */
	
	sum = 5 + 25 * 2;

/* 7. Comment section uses wrong character to end.*/

	/* display results */

/* 8, 9, and 10. % was placed but not used, %d will insert 'sum' variable properly. Sum 
was inside of the parentheses. Semi-Colon was a colon at the end of the print 
statement.*/

	printf("The answer is %d\n", sum);

	return 0;
}
