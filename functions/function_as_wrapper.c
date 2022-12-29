# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>

int search(void *arr, int arr_size, int ele_size, void *x, bool compare(const void *, const void *));
bool compare(const void *a, const void *b);
/**
 * main - search
 * Return: binary
 */

int main(void)
{
	int arr[] = {2, 7, 8, 20};
	int n = sizeof(arr) / sizeof(int);
	int x = 7;

	printf("Returned index %d\n", search(arr, n, sizeof(int), &x, compare));
	exit(EXIT_SUCCESS);
}

/**
 * search - search for anything
 * @arr: pointer to array of what to search
 * @arr_size: size of arr
 * @ele_size: individual elem size
 * @x: what to search
 * Return: -1 or position or first occurance of x
 */

int search(void *arr, int arr_size, int ele_size, void *x, bool compare(const void *, const void *))
{
	char *ptr = (char *) arr;
	int i;

	for (i = 0; i < arr_size; i++)
		if (compare(ptr + i * ele_size, x))
			return (i);
	return (-1);
}

/**
 * compare - compare function for search
 * @a: pointer to array to search
 * @b: pointwr to what to find
 */

bool compare(const void *a, const void *b)
{
	return (*(int *)a == *(int *)b);
}
