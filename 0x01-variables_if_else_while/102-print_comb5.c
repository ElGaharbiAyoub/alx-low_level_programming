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
	int k;
	int f;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = i; k <= 9; k++)
			{
				for (f = j + 1; f <= 9; f++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(32);
					putchar('0' + k);
					putchar('0' + f);
					if (j == 8 && i == 9)
						continue;
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
