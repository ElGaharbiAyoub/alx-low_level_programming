#include  "main.h"

/**
 * _strspn -  locates a character in a string
 * @s: pointer buffer
 * @accept: first occurrence of the character
 *
 * Return: lent .
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, lent = 0, isTrue = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] != accept[j])
			{
				isTrue = 1;
			}
			else
			{
				isTrue = 0;
				lent++;
				break;
			}
		}
		if (isTrue == 1)
		{
			break;
		}
	}
	return (lent);
}
