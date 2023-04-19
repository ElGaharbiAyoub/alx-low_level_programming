#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches ofr an integer
 * @array: array of numbers
 * @size: size of array
 * @cmp: pointer to function to be used to compare values
 *
 * Return: index of element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

