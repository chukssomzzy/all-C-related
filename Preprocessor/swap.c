
# define swap(t, x, y) ({
		typeof(t) tmp;  \
		tmp = x; \
		x = y; \
		y = tmp; \
})

/**
 * main - test swap
 *
 * Return: binary
 */

int main(void)
{
	int x = 5, y = 10;

	swap(int, x, y);
	printf("x = 5 now x = %i, y = 10 now y = %i\b", x, y);
	return (0);
}
