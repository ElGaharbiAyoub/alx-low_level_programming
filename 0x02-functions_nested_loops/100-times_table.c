#include "main.h"

/**
 * print_times_table - print the n time table, starting with 0.
 *
 * @n: the number to be checked.
 *
 * Return: print n time or noting.
 */

void print_times_table(int n)
{
	int col, row, r;
	int mult = 0;

	if (n < 15 || n < 0)
	{
		for (row = 0; row < n + 1 ; row++)
		{
			for (col = 0; col < n + 1 ; col++)
			{

				mult = row * col;
				if (mult < 10)
				{
					if (col != 0)
					{
						_putchar(' '), _putchar(' '), _putchar(' ');
					}
					_putchar(mult + '0');
				}
				if (mult >= 10 && mult < 100)
				{
					_putchar(' '), _putchar(' ');
					_putchar(mult / 10 + '0');
					_putchar(mult % 10 + '0');
				}
				if (mult >= 100)
				{
					_putchar(' ');
					r = mult / 10;
					_putchar(r / 10 + '0');
					_putchar(r % 10 + '0');
					_putchar(mult % 10 + '0');
				}
				if (col != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}

