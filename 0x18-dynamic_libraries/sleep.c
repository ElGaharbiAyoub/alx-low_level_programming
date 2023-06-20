#include <stdio.h>
#include <stdlib.h>

int rand(void)
{
	static int tt = -1;

	tt++;
	if (tt == 0)
		return 8;
	if (tt == 1)
		return 8;
	if (tt == 2)
		return 7;
	if (tt == 3)
		return 9;
	if (tt == 4)
		return 23;
	if (tt == 5)
		return 74;
	return tt * tt % 30000;
}
