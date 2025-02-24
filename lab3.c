/*Suren Juliano
CPSC 1011, Section 3, Spring 2025
Due 1/31/25
Lab 3*/

// This program reads a users input of a character, converts it to its ASCII decimal 
// value, takes that value and gives the square root of it, and then rounds pi to the 
// number of digits that the square root gives. For example, if the square root is 8 it 
// will round pi to 8 digits.

#include <stdio.h>
#include <math.h>

int main(void) {

// Variables	

char userInput;
double squareRoot;
int decimalPlaces;

// Prompt user for character input 

	fprintf(stderr,"Enter a character:\n");
	fscanf(stdin, "%c", &userInput);

// Converting their input
	
	fprintf(stdout, "The decimal value of %c is: %d\n", userInput, userInput);

// Square Root calculation to the first decimal place.

	squareRoot = sqrt(userInput);
	fprintf(stdout, "The square root of %d is: %.1f\n", userInput, squareRoot);

// Printing out PI to the rounded input.
// Using the variable decimalPlaces to round the square root up to be able to round pi.
	
	decimalPlaces = (int)round(squareRoot);
	fprintf(stdout, "PI printed to %d decimal places is: %.*f\n", decimalPlaces, 
decimalPlaces, M_PI);


}
