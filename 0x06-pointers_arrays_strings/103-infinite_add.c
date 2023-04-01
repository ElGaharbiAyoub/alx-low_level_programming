#include "main.h"
/**
 * infinite_add - writes the character c to stdout
 * @n1: The character to print
 * @n2: The character to print
 * @r: The character to print
 * @size_r: The character to print
 *
 * Return: r.
 * 
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, last1, last2, br, ihtifad = 0, oper;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i >= j ? br = i : br = j;
	if (size_r <= br + 1)
		return (0);
	*(r + (br + 1)) = '\0', i--, j--, size_r--;
	last1 = *(n1 + i) - '0', last2 = *(n2 + j) - '0';
	for (; br >= 0; br--, size_r--)
	{
		oper = last1 + last2 + ihtifad;
		if (oper >= 10)
			ihtifad = oper / 10;
		else
			ihtifad = 0;
		if (oper > 0)
			*(r + br) = (oper % 10) + '0';
		else
			*(r + br) = '0';
		if (i > 0)
			i--, last1 = *(n1 + i) - '0';
		else
			last1 = 0;
		if (j > 0)
			j--, last2 = *(n2 + j) - '0';
		else
			last2 = 0;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
