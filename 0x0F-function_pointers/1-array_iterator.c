#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on
 * aech element of an array
 * @array: array of numbers
 * @size: size of array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
