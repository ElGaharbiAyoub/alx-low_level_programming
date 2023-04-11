#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that ceate an array of chars and initializes
 * it with a specific char.
 * @size : size of array
 * @c: pointer char
 * Return: returns a pointer to the array , or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *pnt;
	unsigned int = 0;

	if (size == 0)
		return (NULL);

	pnt = malloc(sizeof(char) * size);

	if (pnt == 0)
		return (NULL);

	while (i < size)
	{
		pnt[i] = c;
		i++;
	}
}
