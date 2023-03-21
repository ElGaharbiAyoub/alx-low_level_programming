#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int times = 1;

	while (times <= 10)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		times++;
	}
}
