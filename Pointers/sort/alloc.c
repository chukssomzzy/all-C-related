# include "main.h"
# define ALLOCSIZE 10000
static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

/**
 * alloc - check to see if there is space on the stack then free memory
 * @n: size of stack memeory to alloc
 * Return: pointer to the address
 */
char *alloc(int n)
{
	if (allocbuf + ALLOCSIZE - allocp >= n)
	{
		allocp += n;
		return (allocp - n);
	}
	return (NULL);
}

/**
 * afree - frees a block of memory previously allocated
 * @p: pointer to the block
 */

void afree(char *p)
{
	if (p >= allocbuf && p <= allocbuf + ALLOCSIZE)
		allocp = p;
}
