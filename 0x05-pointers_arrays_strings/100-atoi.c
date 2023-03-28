#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, toi = 0;
	int i, sign = 1, mult = 1;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			sign *= -1;

		if (*(s + count) >= '0' && *(s + count) <= '9')
		{
			if (size > 0)
				mult *= 10;

			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		mult /= 10;
		toi = toi + ((*(s + i) - '0') * mult);
	}
	return (toi * sign);
}
