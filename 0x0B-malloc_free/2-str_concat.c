#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	return (1 + _strlen(s + 1));
}

/**
 * str_concat - concat two string to a newly allocated space in memory
 * @s1: string 1
 * @s2: string 2
 * Return: returns a pointer to the two strings concatenated, or NULL if fails
 */
char *str_concat(char *s1, char *s2)
{
	char *pnt;
	unsigned int i, j, len;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len = _strlen(s1) + _strlen(s2) + 1;

	pnt = malloc(len * sizeof(char));

	for (i = 0; s1[i] != '\0'; i++)
		pnt[i] = s1[i];

	for (j = 0; j <= len; j++, i++)
		pnt[i] = s2[j];

	return (pnt);
}
