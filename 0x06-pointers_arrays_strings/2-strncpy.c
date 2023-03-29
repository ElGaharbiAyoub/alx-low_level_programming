#include "main.h"

/**
 * *_strncpy - copies a string.
 * @dest: char pointer
 * @src: char pointer 2
 * @n:  bytes from src
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && *(src + count) != '\0'; count++)
		*(dest + count) = src[count];

	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
