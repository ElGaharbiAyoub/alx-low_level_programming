#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size of old pointer
 * @new_size: size of new pointer
 * Return: new void pointer or NULL if it fails
 */



void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (!ptr)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);

	if (!p)
		return (NULL);

	if (new_size < old_size)
		for (; i < new_size; i++)
			((char *)p)[i] = ((char *)ptr)[i];
	else
		for (; i < old_size; i++)
			((char *)p)[i] = ((char *)ptr)[i];

	free(ptr);

	return (p);
}
