# include "main.h"
static int sp;
static double val[MAXOP];

/**
 * push - a value into the stack
 * @f: floating point value to push into the stack
 */

void push(double f)
{
	if (sp < MAXOP)
		val[sp++] = f;
	else
		printf("error: stack full can't push %g\n", f);
}

/**
 * pop - pops a value from the stack
 * Return: the value removed from stack
 */

double pop(void)
{
	if (sp > 0)
		return (val[--sp]);
	printf("error: stack empty\n");
	return (0.0);
}
