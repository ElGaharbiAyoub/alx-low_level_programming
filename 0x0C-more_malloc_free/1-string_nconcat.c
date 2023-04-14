#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - return length of a string
 * @s: string to be printed
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * string_nconcat -  concatenates two strings
 * @s1: destination string
 * @s2: string to be concat
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;
	unsigned int size;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (n > _strlen(s2))
		size = _strlen(s2);
	else
		size = n;

	ptr = malloc((_strlen(s1) + size + 1) * sizeof(char));

	if (!ptr)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < size; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
