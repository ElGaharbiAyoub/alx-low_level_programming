#include "stdio.h"

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: int.
 */
int main(void)
{
	int i;
	long  first = 0;
	long  second = 1;
	long  result = 0;

	for (i = 0; i < 50; i++)
	{
		result = first + second;
		if (i != 49)
			printf("%ld, ", result);
		else
			printf("%ld\n", result);
		first = second;
		second = result;

	}
	return (0);
}
