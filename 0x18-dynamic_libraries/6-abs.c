#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @n: the number to be computed.
 *
 * Return: absolute value of number or zero
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	_putchar('\n');
}
