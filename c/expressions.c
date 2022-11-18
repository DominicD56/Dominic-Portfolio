#include <stdio.h>    // Preprocessor directive

int main() {
	int a, b;     // Declaration  
	char c;

	a = 10;       // Assignment statement
	b = 20;

	scanf("%c", &c);

	if(a > b) {
		printf("a > b = %i\n", a > b);   // Output
	}


	if(c >= 65 && c <= 90) {	
		c = c + 32;
	}
	printf("lowercase = %c\n", c);   // k
	
	return 0;    // Return value
} 
