#ifndef _VARIADIC_FUNCTION_H
#define _VARIADIC_FUNCTION_H

/**
 * struct op - struct for 3
 * @c: character to check
 * @f: function to point to
 */
typedef struct op
{
	char *op;
	int (*f)(va_list a);
} op_func;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

int print_c(va_list a);
int print_i(va_list a);
int print_f(va_list a);
int print_s(va_list a);




#endif /** _VARIADIC_FUNCTION_H*/

