#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints its name followed by a new line.
 * @argc: count of the arguments.
 * @argv: pointers to the strings which are those arguments.
 * Return: 0 if successful.
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
