#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
 * chartoint - function that checks array of characters for integers
 * @c: array of characters
 * Return: 0 if successful, -1 if fails
 */
int chartoint(char *c)
{
	int num;
	char *ptr;

	num = strtol(c, &ptr, 10);
	if (ptr[0])
		return (-1);
	return (num);
}

/**
 * main - function that prints all arguments it receives.
 * @argc: count of the arguments.
 * @argv: pointers to the strings which are those arguments.
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int sum = 0, num, i;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = chartoint(argv[i]);
		if (num > -1)
		{
			if (INT_MAX - sum > num)
				sum += num;
			else
				num = -1;
		}
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

