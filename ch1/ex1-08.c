#include <stdio.h>

// ex 1-8: write a program to count blanks, tabs, and newlines //
int main()
{
	int c;
	int bl, tab, nl;

	bl = 0;
	tab = 0;
	nl = 0;

	while ((c = getchar()) != EOF)
		if (c == '\n')
			++nl;
		else if (c == ' ')
			++bl;
		else if (c == '\t')
			++tab;

	printf("num blanks: %d\n", bl);
	printf("num tabs: %d\n", tab);
	printf("num newlines: %d\n", nl);
}

