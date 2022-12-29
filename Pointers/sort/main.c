# include "main.h"
# include <stdio.h>
# define MAXLINES 5000
static char *lineptr[MAXLINES];

/**
 * main - sort lines
 *
 * Return: binary
 */

int main(void)
{
	int nlines;

	nlines = readlines(lineptr, MAXLINES);
	if (nlines >= 0)
	{
		quicksort(lineptr, 0, nlines - 1);
		writelines(lineptr, nlines);
		return (0);
	}
	dprintf(2, "error: input too big to sort\n");
	return (1);
}
