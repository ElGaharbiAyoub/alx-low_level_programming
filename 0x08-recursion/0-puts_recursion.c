#include  "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	char *str = s;

	_putchar(*str);
	str++;
	if (*str != '\0')
		_puts_recursion(str);
	_putchar('\n');
	return (0);
}
