# include <stdio.h>
# define IN 1 /* in a word*/
# define OUT 0 /* out of a word */

/**
 * print_about - print char_count, word_count, line_count
 *
 * Return: void
 */

void print_about(void)
{
	double c, nl, nw, nc;

	nl = nc = nw = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\t')
			++nw;
	}
	printf("%.0f characters \t%.0f words \t%.0f lines\n", nc, nw, nl);
}
