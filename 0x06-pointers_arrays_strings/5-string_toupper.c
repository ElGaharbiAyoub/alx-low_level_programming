#include "main.h"

/**
 * * string_toupper - convert string to uppercase.
 * @str: char pointer
 *
 * Return: str pointer
 */
char *string_toupper(char *str)
{
	int i, len = 0;

	i = 0;

	while (str[len] != '\0')
		len++;

	while (i < len)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;

	}
	return (str);
}
