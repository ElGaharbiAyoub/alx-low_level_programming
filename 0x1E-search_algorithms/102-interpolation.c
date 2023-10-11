#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 * using Interpolation search
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	while (array)
	{
		pos = low + (((double)(high - low) / (
						array[high] - array[low])) * (value - array[low]));

		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		if (value == array[pos])
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
