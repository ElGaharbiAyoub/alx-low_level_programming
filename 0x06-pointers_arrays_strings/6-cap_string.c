#include "main.h"

/**
 * *cap_string -  capitalizes all words of a string
 * @str: char pointer
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i, j;
	char *c = " ,;.!?\"(){}\n\t";

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			for (j = 0; *(c + j) != '\0'; j++)
			{
				if (str[i - 1] == *(c + j))
				{
					str[i] = str[i] - 32;
					break;
				}
				else if (i == 0)
				{
					str[i] = str[i] - 32;
					break;
				}
			}
		}
		i++;
	}
	return (str);
}
