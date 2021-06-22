#include <stdio.h>

/* fahrenheit-celsius table with a for loop */

main()
{
	int fahr;

	printf("%3c %6c\n", 'F', 'C');
	
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
