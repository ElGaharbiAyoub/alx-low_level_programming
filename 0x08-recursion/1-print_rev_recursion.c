#include  "main.h"

/**
 * _puts_rev_recursion - prints a string in reverse
 * @s: string to be printed
 *
 * Return: nothing
 */

void _puts_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
