#include <stdio.h>

/**
 * main - Prints the sum of Even Fibonacci numbers
 * less than 4000000.
 *
 * Return: Nothing!
 */
int main(void)
{
	long  first = 0;
	long  second = 1;
	long  sum;
	float totl_sum = 0;

	while (1)
	{
		sum = first + second;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			totl_sum += sum;
		first = second;
		second = sum;
	}
	printf("%.0f\n", totl_sum);
	return (0);
}
