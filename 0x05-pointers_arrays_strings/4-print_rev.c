#include "main.h"
/**
 * print_rev -  rever string
 * @s: string
 *
 *return : string
 */

void print_rev(char *s)
{
	int len = _strlen(s);
	int i = len;

	while (i == 0)
	{
		_putchar(s[i]);
		i--;
	}
}
