# include "main.h"

/**
 * _getline - read line from stdio
 * @line: pointer to store line
 * @len: size of line
 *
 * Return: len of line or -1 on error
 *
 */

int _getline(char *line, int len)
{
	int c;
	int i = 0;

	while (len && (c = getchar()) != EOF)
		if (c != '\n' && len--)
			*(line + i++) = c;
		else
		{
			*(line + i) = '\0';
			return (i);
		};

	return (-1);
}
