#include <stdio.h>

// Ask the user for 3 integers
// Use scanf("%i", varname);
// Print out the sum of all 3 variables

int main () {
	int x, y, z;
	printf("Enter length: ");
	scanf("%i", &x);
	printf("Enter width: ");
	scanf("%i", &y);
	printf("The perimeter of the rectangle is %i\n", x + x + y + y);
	return 0;
} 
