#include "main.h"
/**
 * swap_int -  swaps the values of two integers
 * @a: pointer number to be updated.
 * @b: number to be swaps
 *
 *return : nothing.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
