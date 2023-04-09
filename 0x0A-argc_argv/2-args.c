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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
