#include "main.h"
/**
 * _puts2 -  print evry other string
 *
 * @str: string
 *
 *return : string
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
