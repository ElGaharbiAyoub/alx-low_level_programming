#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - return length of a string
 * @s: string to be printed
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	if (*s && *s != ' ')
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * count_words - return length of a string
 * @str: string to be printed
 *
 * Return: length of str
 */
int count_words(char *str)
{
	int i = 0, count = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ')
				i++;
		}
		i++;
	}
	return (count);
}

/**
 * strtow - return pointer
 * @str: string to be printed
 *
 * Return: pointer or NULL
 */

char **strtow(char *str)
{
	char **result;
	int i = 0;
	int lenw;

	result = malloc(sizeof(char *) * count_words(str) + 1);
	while (*str)
	{
		if (*str != ' ')
		{
			lenw = _strlen(str);
			result[i] = malloc(sizeof(char) * lenw + 1);
			if (!result[i])
			{
				for (int j = 0; j < i; i++)
					free(result[j]);
				free(result);
				return (NULL);
			}
			_strncpy(result[i], str, lenw);

			i++;

			while (*str != ' ')
				str++;
			while (*str == ' ')
				str++;
		}
		if (*str == ' ')
			str++;
	}
	return (result);
}
