# include "main.h"

/**
 * get_lines - return the length of get_lines
 * @l: array pointer to store gotten get_lines
 * @lim: Maxlength
 * Return: length of line and counts \n as 1
 */

int get_lines(char l[], int lim)
{
	int i, c;

	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
		l[i++] = c;
	if (c == '\n')
		l[i++] = c;
	l[i] = '\0';
	return (i);
}
