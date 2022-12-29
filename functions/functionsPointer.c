# include <stdio.h>

/**
 * fun - print an integer
 * @a: int a
 */

void fun(int a)
{
	printf("Value of a is %d\n", a);
}

/**
 * main - unit test
 * Return: binary
 */

int main(void)
{
	void (*fun_ptr)(int) = fun;  /* &removed */

	fun_ptr(10); /* * removed  */
	return (0);
}
