# include <stdio.h>

/**
 * main - shows the size of pointers on my machine
 *
 * Return: Suceess (0)
 */


int main(void)
{
	printf("size of char** is : %zu\n", sizeof(char**));
	printf("size of int** is : %zu\n", sizeof(int**));
	printf("size of double** is : %zu\n", sizeof(double**));
	printf("size of int* is : %zu\n", sizeof(int*));
	printf("size of char* is : %zu\n", sizeof(char*));
	return (0);
}
