# include <stddef.h>

/**
 * _strlen - return  len of _str
 * @s: string pointer
 * Return: diff of pointer
 */

ptrdiff_t _strlen(char *s)
{
	char *p = s;

	while (*p++ != '\0')
		;
	return (p - s);
}
