#include "main.h"

/**
 * *_strncat - concatenates two string.
 * @dest: char pointer
 * @src: char pointer 2
 * @n:  bytes from src
 * Return: dest pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, count, i;

	len = 0;
	i = 0;

	while (dest[len] != '\0')
		len++;

	for (count = len; i < n && src[i] != '\0'; count++)
	{
		*(dest + count) = src[i];
		i++;
	}
	return (dest);
}
