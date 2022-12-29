# include <stdio.h>
# include <stdlib.h>
# include "main.h"

/**
 * main - start of execution
 * @argc - size of / amount of cmd args passed
 * @argv - all args passed
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	nodeptr first = NULL;
	nodeptr temp = malloc(sizeof(node));
	// node first_node;

	first = malloc(sizeof(node));
	first->next = NULL;
	first->value = 62;
	/**
	 * first->next = malloc(sizeof(node));
	 * first->next->value = 63;
	 * first->next->next = NULL;
	 */
	temp->next = first;
	first = temp;

	return (0);
}
