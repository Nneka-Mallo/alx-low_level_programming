#include "main.h"

/**
 *puts2-This is a function prints one char out of 2 of a string.
 *@str:is the input string.
 *Return:there is no return.
 */
void puts2(char *str);

	int x = 0;
while (x >= 0)
{
	if (str[x] == '\0')
{
	_putchar('\n');
	break;
}
	if (count % 2 == 0)
		_putchar(str[x]);
	x++;
}

