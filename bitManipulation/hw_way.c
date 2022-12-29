# include <stdlib.h>
# include <stdio.h>

int get_way(int a, int b);

/**
 * main - check how many way a number can be
 * @argc: main number
 * @argv: check number
 * Return: binary
 *
 */

int main(int argc, char **argv)
{
	int f, s;

	if (argc == 1)
	{
		printf("invalid args\n");
		return (1);
	}
	f = atoi(*(argv + 1));
	s = atoi(*(argv + 2));
	printf("%i can be added to %i in %i ways\n", s, f, get_way(f, s));
	return (0);
}


/**
 * get_way - find s in f
 * @b: first int
 * @a: second int
 * Return: int
 *
 */

int get_way(int a, int b)
{
	int tol = 1;

	while (a && b)
	{
		if (a & 1)
		{
			if (b & 1)
				tol *= 2;
			else
				return (0);
		}
		a = a >> 1;
		b = b >> 1;
	}
	return (tol);
}
