# include <stdio.h>
#include <sys/types.h>
# include <unistd.h>
# include <stdlib.h>

void free_buf(char **s, ssize_t n);
/**
 * main - print to stdout
 * Return: 0
 */

int main(void)
{
	ssize_t ln;
	char *lnptr = NULL;
	size_t n;
	ssize_t w;

	printf("$ ");
	while ((ln = getline(&lnptr, &n, stdin)) != -1 || ln != EOF)
	{

		w = write(STDOUT_FILENO, lnptr, ln);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: couldn't write stdout");
			break;
		}
		printf("$ ");
	}
	free(lnptr);
	return (0);
}

/**
 * free_buf - frees two dimensional buffer
 * @s: pointer to buffer
 * @n: number of byte
 */

void free_buf(char **s, ssize_t n)
{
	free(*(s + --n));
	if (n == 0)
	{
		free(s);
		return;
	}
	free_buf(s, n);
}
