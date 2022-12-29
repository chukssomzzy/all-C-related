# include "main.h"
#include <ctype.h>
#include <stdio.h>
# define MAX 1000
static char buf[1000];
static int i = -1;
int getch(void);
void ungetch(char);

/**
 * getint - get int from stdin
 * @pn: pointer to int
 * Return: 0 if NAN positive if it contains a number and EOF
 */
int getint(int *pn)
{
	int c, sign;

	while (isspace(c = getch()))
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-')
	{
		ungetch(c);
		return (0);
	}
	sign = (c = '-') ? -1 : 1;
	if (c == '-' || c == '+')
		c = getch();
	for (*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if (c == EOF)
		return (EOF);
	return (c);
}

/**
 * getch - safely getchar from stream
 * Return: int of char
 */

int getch(void)
{
	char ret;
		if (i < 0)
			return (getchar());
	ret = buf[i--];
	return (ret);
}

/**
 * ungetch - ungetchar from stream
 * @ch: char to save to buf
 */

void ungetch(char ch)
{
	buf[++i] = ch;
}
