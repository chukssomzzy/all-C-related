# include <stdio.h>
# include <stdlib.h>

/**
 * main - detectect if number is odd or even and print
 * @argc: size
 * @argv: arr
 * Return: binary
 *
 */

int main(int argc, char **argv)
{
	int i = atoi(*(argv + argc - 1));

	if (!(i & 1))
		printf("%i is an even number", i);
	else
		printf("%i is an odd number", i);
	return (0);
}
