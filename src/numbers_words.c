/* This program asks for a number and prints the number in words in a reversed order
 */

#include <stdio.h>
#include "espl_lib.h"

int main(void) {
	
	unsigned int number;
	char * word;

	// A variable to contain Y or N for repeating the program
	char decision;

	// A resulting decision flag: 0 - No, 1 - Yes 
	int flag_decision = 1;

	while (flag_decision) {
	
		printf("Enter a positive integer:\n");
		scanf("%d", &number);
	
		word = num_to_words(number);

		printf("%s\n", word);

		printf("Wanna do another number? Y/N\n");
		scanf(" %c", &decision);

		// Hint: " " is a pointer, ' ' is a number
		if (decision == 'Y')
			flag_decision = 1;
		else
			flag_decision = 0;
	}
}
