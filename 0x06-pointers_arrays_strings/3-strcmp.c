#include "main.h"

/**
 * *_strcmp - compares two string.
 * @s1: char pointer
 * @s2: char pointer 2
 * Return: size difference of strings
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while (*(s1 + count) != '\0' || *(s2 + count) != '\0')
	{
		if (*(s1 + count) != *(s2 + count))
			return (*(s1 + count) - *(s2 + count));
		count++;
	}
	return (0);
}


