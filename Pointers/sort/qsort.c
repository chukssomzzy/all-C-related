# include "main.h"

/**
 * quicksort - recursively sorts an array in place
 * @arr: arr to sort from lowest to biggest
 * @lo: lowest element of array or subarray
 * @hi: higgest element of subarray based on index
 */

void quicksort(char **arr, int lo, int hi)
{
	int p;

	int partition(char **, int, int);
	if (lo >= hi || lo < 0)
		return;
	p = partition(arr, lo, hi);
	quicksort(arr, lo, p - 1);
	quicksort(arr, p + 1, hi);
}

/**
 * partition - sort arr and define pivot
 * @arr: arr to sort
 * @lo: subarray lowest index
 * @hi: subarray higest index
 * Return: location of pivot
 */

int partition(char **arr, int lo, int hi)
{
	int pv, j, i;

	void swap(char **arr, int i, int j);
	pv = hi;
	i = lo - 1;
	for (j = lo; j < hi; j++)
		if (strcmp(*(arr + j), *(arr + pv)) < 0)
			swap(arr, i++, j);
	swap(arr, ++i, hi);
	return (i);
}

/**
 * swap - swaps two pointer in an array
 * @arr: pointer array
 * @i: index
 * @j: index
 */

void swap(char **arr, int i, int j)
{
	char *tmp;

	if (i == j)
		return;
	tmp = *(arr + i);
	*(arr + i) = *(arr + j);
	*(arr + j) = tmp;
}
