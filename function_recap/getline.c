# include "main.h"
static int _getch(void);
static int openfd[2];

/**
 * _getline - get a line from stdin
 * @line: pointer to store read line
 * @size: size of buffer line
 * Return: returns number of line read or -1
 */

ssize_t _getline(char *line, size_t *size)
{
	int c;
	size_t i = 0;

	while ((c = _getch()) != -1)
	{
		if (i == *size)
		{
			i += 100;
			*size = i;
			line = realloc(line, i);
		}
		*(line + i++) = c;
		if (c == '\n')
			break;
	}
	*(line + i++) = '\0';
	if (c == -1)
		return (-1);
	return (i);
}


/**
 * _getch - get a single character from standard output
 * Return: char or -1 on error
 */

int _getch(void)
{
	char buf;

	buf = 0;
	if (!*openfd)
	{
		if (pipe(openfd) == -1)
		{
			perror("pipe");
			exit(1);
		}
		close(openfd[1]);
	}
	if (read(0, &buf, 1) > 0)
		return (buf);
	else if (read(openfd[0], &buf, 1) > 0)
		return (buf);
	if (!buf)
		close(openfd[0]);
	return (-1);
}
