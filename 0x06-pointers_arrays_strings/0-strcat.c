#include "main.h"

/**
 * *_strcat - concatenates two string.
 * @dest: char pointer
 * @src: char pointer 2
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src)
{
	int len, count;

	lent = 0;
	i = 0;

	while (dest[len] != '\0')
		len++;

	for (count = len; src[i] != '\0'; count++)
	{
		*(dest + count) = src[i];
		i++;
	}
	return (dest);
}
