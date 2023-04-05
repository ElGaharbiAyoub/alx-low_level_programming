#include "holberton.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	char *b;
	char *p;

	while (*haystack != '\0')
	{
		b = haystack;
		p = needle;

		while (*p != '\0' && *b == *p)
		{
			b++;
			p++;
		}
		if (*p == '\0')
			return (b);
		haystack = b + 1;
	}
	return (0);
}
