# include "main.h"
# include <stdio.h>
/**
 * get_lines - return a pointer to each the buffer
 * @b: string buffer
 * @n: max length
 * Return: a pointer
 */

int get_lines(char *b, int n)
{
	int i, c;

	i = 0;
	while (--n > 0 && (c = getchar()) != EOF && c != '\n')
		b[i++] = c;
	if (c == '\n')
		b[i++] = c;
	b[i] = '\0';
	return (i);
}
