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

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	 _putchar('\n');
}
