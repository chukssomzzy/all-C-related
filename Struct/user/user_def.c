# include <stdlib.h>
# include "main.h"

/**
 * new_user - define and initialize a struct of type new_user
 * @name: pointer to name
 * @email: pointer to user email
 * @age: pointer to age
 * Return: a pointer to a struct
 */

struct User *new_user(char *name, char *email, int age)
{
	struct User *user;

	user = malloc(sizeof(struct User));
	if (!user)
		return (NULL);
	user->name = name;
	(*user).email = email;
	(*user).age = age;
	return (user);
}
