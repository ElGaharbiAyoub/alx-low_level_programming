#include  "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*str != '\0')
	{
		_putchar(*str);
		str++;
		_puts_recursion(str);
	}
	else
		_putchar('\n');
}
