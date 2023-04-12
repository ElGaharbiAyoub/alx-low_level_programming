#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy the string given to a newly allocated space in memory
 * @str: string to copy
 * Return: returns a pointer to the copy, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *pnt, *plen;
	unsigned int i, len = 0;

	if (!str)
		return (NULL);

	plen = str;
	while (*plen != '\0')
		len++, plen++;

	len++;
	pnt = malloc(len * sizeof(char));

	if (!pnt)
		return (NULL);

	for (i = 0; i <= len; i++)
		pnt[i] = str[i];

	return (pnt);
}
