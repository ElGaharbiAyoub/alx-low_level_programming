#include "main.h"

/**
 * check - check prime function
 * @n: number to be checked
 * @count: checks if n is divisible by count
 * Return: 0 if not prime, 1 if prime
 */
int check(int n, int count)
{
	if (count != n)
	{
		if (n % count != 0)
			return (check(n, ++count));
		else
			return (0);
	}
	return (1);
}
/**
 * is_prime_number - checks if n is prime
 * @n: number to be checked
 * Return: 0 if not prime, 1 if prime
 */

int is_prime_number(int n)
{
	int count = 2;

	if (n == 1 || n == -1 || n == 0)
		return (0);
	return (check(n, count));
}
