#include <stdio.h>

// copy output to output; 1st version //
main()
{
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}
