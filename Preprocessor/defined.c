# include <stdio.h>

/**
 * main - test for predefined micros
 * Return: binary
 */

int main(void)
{
	printf("Line :%d\n", __LINE__);
	printf("Line :%d\n", __STDC__);
	printf("Line :%s\n", __DATE__);
	printf("Line :%s\n", __FILE__);
	printf("Line :%s\n", __TIME__);
}
