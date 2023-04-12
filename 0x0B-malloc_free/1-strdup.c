#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy the string given to a newly allocated space in memory
 * @str: string to copy
 * Return: returns a pointer to the copy, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *pnt;
	unsigned int i, len = 0;

	if (!str)
		return (NULL);

	while (*str != '\0')
		len++, str++;

	pnt = malloc(len * sizeof(char));

	if (!pnt)
		return (NULL);

	for (i = 0; i <= len; i++)
		pnt[i] = str[i];

	return (pnt);
}
