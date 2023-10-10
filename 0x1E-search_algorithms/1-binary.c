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
			printf(" %u,", array[i]);
		else
			printf(" %u\n", array[i]);
	}
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
	size_t left, right, mdl;

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mdl = left + (right - left) / 2;
		print_array(array, left, right);
		if (array[mdl] == value)
			return (mdl);
		else if (array[mdl] < value)
			left = mdl + 1;
		else
			right = mdl - 1;
	}
	return (-1);
}
