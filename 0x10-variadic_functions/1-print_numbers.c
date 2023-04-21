#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list larg;
	unsigned int i;

	va_start(larg, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(larg, int));
		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(larg);
}
