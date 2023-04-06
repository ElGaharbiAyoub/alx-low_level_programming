#include  "main.h"

/**
 * _new_recursion - calculat count.
 * @n: number
 * @count: number
 *
 * Return: count
 */

int _new_recursion(int n, int count)
{

	if (count * count <= n)
		count = _new_recursion(n, count + 1);
	return (count);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: number
 * Return: -1 if n not have a natural square or  square.
 */
int _sqrt_recursion(int n)
{
	int  count = 1, rst;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	rst = _new_recursion(n, count) - 1;
	if (rst * rst == n)
		return (rst);
	else
		return (-1);

}
