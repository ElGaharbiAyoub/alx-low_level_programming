#include <stdio.h>
/**
 * main -  computes and prints the sum of all the
 * multiples of 3 or 5 below 1024.
 *
 * Return: int
 */

int main(void)
{
	int mult = 0;
	int result = 0;

	while (mult < 1024)
	{
		if (mult % 3 == 0 || mult % 5 == 0)
		{
			result += mult;
		}
		mult += 1;
	}
	printf("%d\n", result);
	return (0);
}
