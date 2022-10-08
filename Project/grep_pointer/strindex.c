# include "main.h"

/**
 * str_index - find a str from a str array
 * @s: pointer to string to search
 * @p: pointer to string to find
 * Return: index of string
 */

int str_index(char *s, char *p)
{
	int i, j, k;

	i = 0;
	while (*(s++) != '\0' && ++i)
	{
		for (j = 0, k = 0; *(p + k) != '\0' && *(s + j) == *(p + k); j++, k++)
			;
		if (k > 0 && *(p + k) == '\0')
			return (i);
	}
	return (-1);
}
