# include <stdio.h>
# include <stdarg.h>

/**
 * printargs - print all number untill encounter a negative number
 * @arg1: holds
 */

void printargs(int arg1, ...)
{
	va_list ap;
	int i;

	va_start(ap, arg1);
	printf("%i ", arg1);
	while ((i = va_arg(ap, int)) >= 0)
		printf("%d ", i);
	va_end(ap);
	putchar('\n');
}


/**
 * main - test printargs
 * Return: binary
 */

int main(void)
{
	printargs(5, 6, 7, 8, 9, -1);
	return (0);
}
