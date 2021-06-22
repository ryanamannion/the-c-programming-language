#include <stdio.h>

// exercise 1-6: verify that the expression
// getchar() != EOF is 0 or 1

main()
{
	int v;
	v = (getchar() != EOF );
	printf("expression is %d\n", v);
}
