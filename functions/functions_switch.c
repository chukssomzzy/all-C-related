# include <stdio.h>


/**
 * add - print addition of two numbers
 * @a: first argument
 * @b: second args
 */

void add(int a, int b)
{
	printf("Addition is %d\n", a + b);
}

/**
 * subtract - print subtraction of two numbers
 * @a: first argument
 * @b: second args
 */

void subtract(int a, int b)
{
	printf("Addition is %d\n", a - b);
}


/**
 * multiply - print multiplication of two numbers
 * @a: first argument
 * @b: second args
 */

void multiply(int a, int b)
{
	printf("Addition is %d\n", a * b);
}

/**
 * main - execution starts here
 * Return: binary
 */

int main(void)
{
	void (*func_ptr[])(int, int) = {add, subtract, multiply};
	unsigned int ch, a = 16, b = 10;

	printf("Enter choice: 0 for add. 1 for substract and 2 for multiply\n");
	scanf("%d", &ch);
	if (ch <= 2)
	{
		(*func_ptr[ch]) (a, b);
	}
	return (0);
}

