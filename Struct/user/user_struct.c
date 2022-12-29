# include <stdio.h>
# include <stdlib.h>
# include "main.h"

/**
 * main - intialize and print out the content of a pointer
 * Return: binary
 */

int main(void)
{
	struct User *user;

	user = new_user("FOO", "foo@foo.bar", 98);
	printf("%s\n", user->name);
	printf("%s\n", user->email);
	printf("%d\n", user->age);
	exit(EXIT_SUCCESS);
}
