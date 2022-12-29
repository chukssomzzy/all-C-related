# include "main.h"
#include <stdlib.h>

/**
 * main - test printd
 * Return: binary
 */

int main(void)
{
	int num[] = {1, 20, 30, 4, 1, 3, 5, 80}, i;

	quicksort(num, 0, 7);
	for (i = 0; i < 8; i++)
		printf("%i\n", num[i]);
	exit(0);
}
