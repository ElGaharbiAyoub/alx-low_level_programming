#include  "main.h"

/**
 * _pow_recursion - value of x raised to the power of y
 * @x: raised number
 * @y: power number
 * Return: -1 if y is lower than 0 and 1 if y is equal 0 and power
 */

int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	power = x * _pow_recursion(x, y - 1);

	return (power);
}
