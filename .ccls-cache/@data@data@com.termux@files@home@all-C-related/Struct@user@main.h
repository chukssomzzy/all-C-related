# ifndef _MAIN_H_
# define _MAIN_H_
# ifndef NULL
# define NULL ((void *)0)
# endif
/**
 * struct, union, enum
 * typedef
 * functions prototypes
 */

/**
 * struct User - create new user
 * @name: holds the users name
 * @email: holds the users email
 *
 * Description: user
 */

struct User
{
	char *name;
	char *email;
	int age;
};
struct User *new_user(char *, char *, int);
#endif /* _MAIN_H_ */

