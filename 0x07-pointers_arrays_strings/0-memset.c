#include  "main.h"

/**
 * _memset - prints buffer in hexa
 * @s: pointer buffer
 * @b: character to be replace
 * @n : size
 *
 * Return: pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
