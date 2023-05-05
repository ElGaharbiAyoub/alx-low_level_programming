#include "main.h"

/**
 * binary_to_uint - vonverts a binary number to an unsigned int
 * @b: binary number
 * Return: the converted number or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unint, digt;
	int lent;

	if (!b)
		return (0);

	for (lent = 0; b[lent]; lent++)
		;
	lent--;
	for (digt = 1, unint = 0; lent >= 0; lent--)
	{
		switch (b[lent])
		{
			case '0':
				digt *= 2;
				continue;
			case '1':
				unint += digt;
				digt *= 2;
				continue;
			default:
				return (0);
		}
	}
	return (unint);
}

