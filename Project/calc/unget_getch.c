# include "main.h"
static char buf[MAXOP];
static int bufp;
/**
 * getch - get the next char from stdin
 * Return: return char
 */


int getch(void)
{
	return ((bufp > 0) ? buf[--bufp] : getchar());
}

/**
 * ungetch - put char in buffer
 * @c: character to put in buffer
 */

void ungetch(int c)
{
	if (bufp > MAXOP)
		printf("ungetch: too many character");
	else
		*(buf + bufp++) = c;
}

