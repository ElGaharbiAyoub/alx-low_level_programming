#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			int digit1 = i / 10;
			int digit2 = i % 10;

			putchar('0' + digit1);
			putchar('0' + digit2);
			putchar(32);
			int digit11 = j / 10;
			int digit22 = j % 10;

			putchar('0' + digit11);
			putchar('0' + digit22);
			if (j == 99 && i == 98)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
