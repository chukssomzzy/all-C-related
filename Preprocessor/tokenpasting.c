# include <stdio.h>
# define token_paser(n) printf("token" #n " = %d\n", token##n)

/**
 * main - test token pasting
 * Return: binary
 */

int main(void)
{
	int token34 = 40;

	token_paser(34);
	return (0);
}
