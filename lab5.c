/* Suren Juliano */
/* Lab Section 3, Lab 5*/
/* Due 2/14/25 */

/* This program takes the users hight and weight as an input, then calculates the users BMI. This program is make to repeat until the user prompts the program to exit at the end of a loop.*/ 

// This program also uses a condition in the loop to determine if the bmi is considered healthy or not.

#include <stdio.h>
#include <math.h>

int main(void) {
	
// Variables	

int weightInput;
int heightInput;
double bmi;
int goAgain;

// Setting up the loop

// Prompting the user for their weight / height.

	// Title and setup stuff

	printf("\n\n               bmi Calculator \n\n");
	printf("Body Mass Index (bmi) is a ratio of weight to height.\n\n");
	printf("Keep in mind that muscle weighs more than fat, so bmi is \n"
	       "not always the best metric of a healthy weight.\n\n\n");

	do {

	// Actual user input		
		goAgain = 1;
		printf("\n\nEnter your weight in pounds (as an integer): ");
		fscanf(stdin, "%d", &weightInput);
		
		printf("Enter your height in inches (as an integer): ");		
		fscanf(stdin, "%d", &heightInput);
	
		bmi = (weightInput * 703)/(heightInput*heightInput);
		printf("\nYour bmi is %.0f.\n",bmi);	

// If statements in loop to determine if BMI is healthy or not
	
	       	if (bmi <= 18) {
		
			printf("According to your bmi, your weight of %d lbs is considered underweight\n", weightInput); 
		}
		
		else if ((bmi > 18) && (bmi <= 24)) {
			
			printf("According to your bmi, your weight of %d lbs is a healthy weight\n", weightInput);
		}
		
		else if ((bmi > 24) && (bmi <= 29)) {
			
			printf("According to your bmi, your weight of %d lbs is considered overweight\n", weightInput);
		}
		
		else {
		
			printf("According to your bmi, your weight of %d lbs is considered obese\n", weightInput);

		}
		
	
	// Prompting the user to go again!	
		
		printf("- - - - - - - - - - - - - - - - - - - - - "
		       "- - - - - - - - - - - -\n\n");
	    do { 
		printf("Enter 1 to go again or 0 to quit: ");
		fscanf(stdin, "%d", &goAgain);
	
	    } while (goAgain != 1 && goAgain != 0);

	} while (goAgain == 1);
	return 0;
	}

