#include <stdio.h>

/* ex 1-04: write a program to print the corresponding celsius to
   Fahrenheit table */

/* fahrenheit-celsius table with a for loop */
int main()
{
	int cel;

	printf("%3c %6c\n", 'C', 'F');
	
	for (cel = 0; cel <= 300; cel = cel + 20)
		printf("%3d %6.1f\n", cel, ((9.0 * cel)/5.0) + 32);
}
