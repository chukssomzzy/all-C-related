# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 * main - for test
 * @argc: size
 * @argv: pointer
 * Return: binary
 */
int main(int argc, char **argv)
{
	double fl;

	if (argc == 1)
	{
		printf("incomplete args\n");
		exit(EXIT_FAILURE);
	}
	fl = _atof(*(argv + 1));

	printf("%f\n", fl);
	exit(EXIT_SUCCESS);
}
