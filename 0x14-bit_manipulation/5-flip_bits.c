#include "main.h"

/**
  * flip_bits - count bits you need to flip to get from one number to another
  * @n: first number
  * @m: second number
  * Return: number of flips to get from one number to the other
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, result;

	result = (n ^ m);
	while (result)
	{
		count += (result & 1);
		result >>= 1;
	}
	return (count);

}
