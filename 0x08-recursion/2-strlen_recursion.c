#include  "main.h"

/**
 * _strlen_recursion - return length of a string
 * @s: string to be printed
 *
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	int lent = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
