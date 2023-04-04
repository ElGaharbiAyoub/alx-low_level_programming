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
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}

