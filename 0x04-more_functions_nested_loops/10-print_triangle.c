#include "main.h"

/**
 * print_triangle -  checks for checks for a digit (0 through 9).
 * @size: size -  Variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int co, rs, ro;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= size; co++)
		{
			for (rs = co; rs < size; rs++)
			{
				_putchar(' ');
			}
			for (ro = 1; ro <= co; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
