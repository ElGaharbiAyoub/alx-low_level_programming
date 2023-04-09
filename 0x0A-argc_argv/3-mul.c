#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints all arguments it receives.
 * @argc: count of the arguments.
 * @argv: pointers to the strings which are those arguments.
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = strtol(argv[1], 0, 10);
		b = strtol(argv[2], 0, 10);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
