#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints its name followed by a new line.
 * @argc: count of the arguments.
 * @argv: pointers to the strings which are those arguments.
 * Return: 0 if successful.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
