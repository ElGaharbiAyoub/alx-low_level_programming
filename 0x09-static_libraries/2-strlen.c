#include "main.h"
/**
 * _strlen -  the length of a string.
 * @s: character
 *
 * Return: number of length.
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
