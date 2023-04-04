#include  "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: pointer buffer
 * @c: first occurrence of the character
 *
 * Return: addriss of s if s is null .
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}

