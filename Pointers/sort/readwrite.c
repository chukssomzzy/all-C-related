# include "main.h"
# define MAXLEN 1000

/**
 * readlines - read lines from stream and save in a pointer array
 * @lineptr: pointer array
 * @maxlines: maxlines maximum lines
 * Return: number of lines read or -1 on error
 *
 */

int readlines(char *lineptr[], int maxlines)
{
	int len, nlines;
	char *p, line[MAXLEN];

	nlines = 0;
	while ((len = _getline(line, MAXLEN)) > 0)
		if (nlines >= maxlines)
		{
			p = alloc(len);
			if (!p)
				return (-1);
		}
		else
		{
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	return (nlines);
}

/**
 * writelines - print lines to stdout
 * @lineptr: pointer array
 * @nlines: number of pointer in pointer array
 */

void writelines(char **lineptr, int nlines)
{
	int i;

	for (i = 0; i < nlines; i++)
		printf("%s\n", lineptr[i]);
}
