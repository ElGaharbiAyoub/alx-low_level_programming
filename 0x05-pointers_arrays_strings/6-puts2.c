#include "main.h"
/**
 * _puts2 -  print evry other string
 *
 * @str: string
 *
 *return : string
 */
void _puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
}
