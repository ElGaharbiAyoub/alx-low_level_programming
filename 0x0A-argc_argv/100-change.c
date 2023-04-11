#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: count of the arguments.
 * @argv: pointers to the strings which are those arguments.
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i = 0, rest, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	rest = atoi(argv[1]);
	if (rest < 0)
	{
		printf("0\n");
		return (0);
	}
	while (i < 5)
	{
		if (rest == 0)
		{
			printf("%d\n", count);
			return (0);
		}
		if (coins[i] <= rest)
		{
			rest -= coins[i];
			count++;
		}
		else
			i++;
	}
	return (0);
}
