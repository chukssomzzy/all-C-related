# include <stdio.h>

/**
 * main - print all arv
 * @ac: size
 * @av: arr
 * Return: 0
 */

int main(int ac, char **av)
{
	int i = 0;

	while (*(av + i))
		printf("%s\n", *(av + i++));
}
