#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value of array
 * @max: max value
 * Return: the pointer to the newly created array or NULL if it fails
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(((max - min) + 1) * sizeof(int));
	if (!p)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
