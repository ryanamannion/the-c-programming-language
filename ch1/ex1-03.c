#include <stdio.h>

/* ex 1-03: Modify the temperature conversion program to print a
   heading above the table */

/* fahrenheit-celsius table with a for loop */
int main()
{
	int fahr;

	printf("%3c %6c\n", 'F', 'C');
	
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
