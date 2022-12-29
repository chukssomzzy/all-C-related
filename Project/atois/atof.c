# include "main.h"
double _divn(double, int);
double _sqrn(double n, int i);

/**
 * _atof - convert string to double
 * @s: string pointer
 * Return: double
 */

double _atof(char *s)
{
	double pow = 1, exp = 1, val = 0.0;
	unsigned int i;
	int sign = 1;

	i = 0;
	if (!s)
		return (0);
	while (isspace(*(s + i)))
		i++;
	if (*(s + i) == '-' || *(s + i) == '+')
		sign = (*(s + i++) == '-') ? -1 : 1;
	while (isdigit(*(s + i)))
		val = BASE10 * val + (*(s + i++) - '0');
	if (*(s + i) == '.')
		i++;
	else
		return (sign * val);
	while (isdigit(*(s + i)))
	{
		val = BASE10 * val + (*(s + i++) - '0');
		pow *= BASE10;
	}
	if (*(s + i) == 'e')
		i++;
	else
		return (sign * val / pow);
	if (isdigit(*(s + i)))
		exp = _sqrn(BASE10, (*(s + i) - '0'));
	else if (*(s + i) == '-')
		exp = _divn(BASE10, (*(s + ++i) - '0'));
	return ((exp / pow) * sign * val);
}

/**
 * _sqrn - multiply a number by itself e times
 * @n: number to multiply
 * @e: number
 * Return: double
 */

double _sqrn(double n, int e)
{
	if (e == 0)
		return (1);
	return (n * _sqrn(n, (e - 1)));
}

/**
 * _divn - divide n by it self e times
 * @n: number to divide
 * @e: times to divide the number
 * Return: double
 */

double _divn(double n, int e)
{
	double resn = 1.0;

	if (!e)
		return (resn);
	while (e-- > 0)
		resn /= n;
	return (resn);
}
