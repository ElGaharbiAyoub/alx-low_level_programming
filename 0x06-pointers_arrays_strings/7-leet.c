#include "main.h"

/**
 * *leet - take strings and capitalize words
 * @str: string to capitalize
 * Return: capitalized words
 */
char *leet(char *str)
{
	int i, j;
	char encoded[] = "aAeEoOtTlL4433007711";

	i = 0;

	while (*(str + i) != '\0')
	{
		for (j = 0; encoded[j] != '\0'; j++)
		{
			if (str[i] == encoded[j])
			{
				str[i] = encoded[j + 10];
				break;
			}
		}
		i++;
	}
	return (str);
}
