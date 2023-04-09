#include "main.h"

/**
 * _isalpha - check if c is alphabetic character
 *
 * @c: the character to be checked
 *
 * Return: 1 for c is a letter, lowercase or uppercase, 0 for rest
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
