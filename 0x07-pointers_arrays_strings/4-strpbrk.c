#include  "main.h"

/**
 * _strpbrk -  locates a string in a string
 * @s: pointer buffer
 * @accept: pointer
 *
 * Return: s or null.
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s >= '\0'; s++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return (0);
}
