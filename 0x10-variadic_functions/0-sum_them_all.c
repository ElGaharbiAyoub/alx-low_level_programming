#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: count of parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list l_arg;
	unsigned int i;
	int sum = 0;

	if (!n)
		return (0);

	va_start(l_arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(l_arg, int);
	}
	va_end(l_arg);
	return (sum);
}
