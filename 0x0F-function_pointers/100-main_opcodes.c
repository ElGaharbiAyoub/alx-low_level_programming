#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: length of argv
 * @argv: arguments
 * Return: 0 if succesful
 */

int main(int argc, char *argv[])
{
	int a1, i;
	unsigned char *p_f;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a1 = atoi(argv[1]);
	if (a1 < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p_f = (unsigned char *)main;
	for (i = 0; i < (a1 - 1); i++)
	{
		printf("%02x ", p_f[i]);
	}
	printf("%02x", p_f[i]);
	printf("\n");
	return (0);
}
