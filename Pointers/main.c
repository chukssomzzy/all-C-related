# include "main.h"

/**
 * main - get int from buffer
 *
 * Return: binary
 */

int main(void)
{
	int got = 0;

	getint(&got);

	printf("%i\n", got);
	return (0);
}
