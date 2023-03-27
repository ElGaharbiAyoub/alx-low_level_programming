#include "main.h"
/**
 * rev_string - reverses string
 * @str: string
 *
 *return : string .
 */

void rev_string(char *str)
{
	int len = 0;
	int start, end, count;

	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	for (count = 0; count <= len / 2; count++)
	{
		start = str[count];
		end = str[len - count];
		str[count] = end;
		str[len - count] = start;
	}
}
