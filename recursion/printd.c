# include "main.h"

/**
 * printd - recursively print decimal
 * @d: hold automatic variables (int)
 */

void printd(int d)
{
	if (d < 0)
	{
		putchar('-');
		d = -d;
	}
	if (d / 10)
		printd(d / 10);
	putchar(d % 10 + '0');
}
