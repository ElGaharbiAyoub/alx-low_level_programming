#include  "main.h"

/**
 * _memcpy - prints buffer in hexa
 * @dest: pointer buffer
 * @src: pointer buffer
 * @n : size
 *
 * Return: pointer dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);

	}
	return (dest);
}

