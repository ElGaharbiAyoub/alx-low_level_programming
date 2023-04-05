#include  "main.h"

/**
 * factorial - return factorial of a given number
 * @n: number to be factori
 *
 * Return: -1 if n lower 0 and 1 if n equal 0 and n! if n upper 0
 */

int factorial(int n)
{
	int fac;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	fac = n * factorial(n - 1);
	return (fac);
}
