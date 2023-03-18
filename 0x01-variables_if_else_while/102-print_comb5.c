#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 <= 98; d1++)
	{
		for (d2 = d1 + 1; d2 <= 99; d2++)
		{
			int digit1 = d1 / 10;
			int digit11 = d1 % 10;

			putchar(digit1 + '0');
			putchar(digit11 + '0');
			putchar(' ');
			int digit2 = d2 / 10;
			int digit22 = d2 % 10;

			putchar(digit2 + '0');
			putchar(digit22 + '0');

			if (d1 == 98 && d2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
