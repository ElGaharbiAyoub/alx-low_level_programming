#include "main.h"

/**
 * reverse_array - reverse array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, prev, end;

	i = 0;

	while (i < n  && i < n / 2)
	{
		prev = a[i];
		end = a[(n - 1) - i];
		a[i] = end;
		a[(n - 1) - i] = prev;
		i++;
	}
}

