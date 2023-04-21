#include "variadic_function.h"
#include <stdarg.h>

/**
 * print_c - prints char
 * @a: list to give
 * Return: always 0
 */
int print_c(va_list a)
{
	printf("%c", va_arg(a, int));
	return (0);
}

/**
 * print_i - prints int
 * @a: list to give
 * Return: always 0
 */
int print_i(va_list a)
{
	printf("%d", va_arg(a, int));
	return (0);
}

/**
 * print_f - prints float
 * @a: list to give
 * Return: always 0
 */
int print_f(va_list a)
{
	printf("%f", va_arg(a, double));
	return (0);
}

/**
 * print_s - prints string
 * @a: list to give
 * Return: always 0
 */
int print_s(va_list a)
{
	char *s;

	s = va_arg(a, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", s);
	return (0);
}

/**
 * print_all - prints all
 *
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list larg;
	int i = 0, j;
	char *s_btw_arg;
	op_func ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(larg, format);

	s_btw_arg = "";
	while (format && format[i])
	{
		j = 0;
		while (ops[j].f)
		{
			if (format[i] == *(ops[j].op))
			{
				printf("%s", s_btw_arg);
				ops[j].f(larg);
			}
			j++;
		}
		s_btw_arg = ", ";
		i++;
	}
	printf("\n");
	va_end(larg);
}

