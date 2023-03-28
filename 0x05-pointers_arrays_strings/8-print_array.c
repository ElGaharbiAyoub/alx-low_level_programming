#include "main.h"
#include <stdio.h>
/**
 * print_array - prints half a string
 * @a: array
 * @n: length of array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", n[i]);
		else
			printf("%d, ", n[i]);
	}
	printf("\n");
}
