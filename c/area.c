#include <stdio.h>

// Ask the user for 3 integers
// Use scanf("%i", varname);
// Print out the sum of all 3 variables

int main () {
	int length, with, area;

	printf("Enter length: ");
	scanf("%i", &length);

	if( length <= 0  ) 
	{ 
   		printf("Length cannot be negative!\n")
		return 0;
	} 

	printf("Enter width: ");
	scanf("%i", &width);

	if( width <= 0  ) 
	{
		printf("Width can not be negative!\n")
		return 0;
	}

	area = length * width
	printf("The area of the rectangle is %i\n", area);
	return 0;
} 
