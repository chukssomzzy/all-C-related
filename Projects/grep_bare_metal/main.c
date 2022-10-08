# include "main.h"

/**
 * main - takes a pattern and prints line containing the pattern
 *
 * Return: success (0)
 */
int main(void)
{

	char line[MAXLENGTH];
	char test[] = "pattern";
	int found = 0;

	while (get_lines(line, MAXLENGTH) > 0)
		if (str_index(line, test) >= 0)
		{
			printf("%s", line);
			found++;
		}

	return (found);
}
