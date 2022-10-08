# include "main.h"

/**
 * str_index - returns the index of the search str in character str_index
 * @l: character array to be tested
 * @t: character array to tested
 * Return: return starting index of search string
 */

int str_index(char l[], char t[])
{
	int i, j, k;

	for (i = 0; l[i] != '\0'; i++)
	{
		for (j = i, k = 0; t[k] != '\0' && l[j] == t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			return (i);
	}
	return (-1);
}
