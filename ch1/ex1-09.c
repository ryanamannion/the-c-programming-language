#include <stdio.h>

/* ex 1-8: write a program to copy its input to its output, replacing
each string of one or more blanks by a single blank */
int main()
{
	int c;
	int prev;

	c = getchar();
	while (c != EOF) {
		if (c == ' ') {
			if (prev != ' ')
				putchar(c);
		}
		else
			putchar(c);
		prev = c;
		c = getchar();
	}
		
}
