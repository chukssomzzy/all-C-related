# include "main.h"
# include <stdlib.h>
# define MAXLINE 1000
/**
 * main - print lines containing a search string
 * @argc: return size of argv
 * @argv: arg vector
 * Return: binary
 */

int main(int argc, char **argv)
{
	char b[MAXLINE];
	char *p = *(argv + --argc);
	int found = 0;

	while (get_lines(b, MAXLINE) > 0)
		if (str_index(b, p) >= 0)
		{
			printf("%s\n", b);
			found++;
		}
	printf("%i", found);
	exit(EXIT_SUCCESS);
}
