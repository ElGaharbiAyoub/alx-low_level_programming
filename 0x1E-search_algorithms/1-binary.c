#include "search_algos.h"

/**
 * print_array - prints it
 * @array: array to print
 * @start: start of array
 * @end: end of array
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array:");
	for (i = start; i <= end; i++)
	{
		if (i != end)
			printf(" %d,", array[i]);
		else
			printf(" %d\n", array[i]);
	}
}

/**
 * rec_search - recursively search using binary algo
 * @array: array to search
 * @l: left most value
 * @r: right most value
 * @val: value to search
 *
 * Return: index or -1 if not found
 */

int rec_search(int *array, size_t  l, size_t  r, int val)
{
	size_t  mdl;

	if (r >= l)
	{
		mdl = l + (r - l) / 2;
		print_array(array, l, r);
		if (array[mdl] == val)
			return (mdl);
		if (array[mdl] > val)
			return (rec_search(array, l, mdl - 1, val));
		return (rec_search(array, mdl + 1, r, val));
	}
	return (-1);
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index of the value if found, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (array)
		return (rec_search(array, 0, size - 1, value));
	return (-1);
}
