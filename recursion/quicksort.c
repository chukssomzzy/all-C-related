# include "main.h"

/**
 * quicksort - recursively sorts an array in place
 * @arr: arr to sort from least to biggest
 * @lo: lowest element of subarray based on index
 * @hi: higgest element of subarray based on index
 */
void quicksort(int *arr, int lo, int hi)
{
	int p;

	int partition(int *arr, int lo, int hi);
	if (lo >= hi || lo < 0)
		return;
	p = partition(arr, lo, hi);
	quicksort(arr, lo, p - 1);
	quicksort(arr, p + 1, hi);
}

/**
 * partition - sort and define pivot
 * @arr: pointer to arr to define it pivot
 * @lo: int lowest
 * @hi: int highest
 * Return: pointer index of pivot
 */

int partition(int *arr, int lo, int hi)
{
	int pv, j, i;

	void swap(int *arr, int i, int j);
	pv = arr[hi];
	i = lo - 1;
	for (j = lo; j < hi; j++)
		if (arr[j] <= pv)
		{
			i++;
			swap(arr, i, j);
		}
	i++;
	swap(arr, i, hi);
	return (i);
}

/**
 * swap - swaps element of two index
 * @arr: pointer to array to conduct the swap
 * @i: first index
 * @j: second index
 */

void swap(int *arr, int i, int j)
{
	int tmp;

	if (!arr || i == j)
		return;
	tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}
