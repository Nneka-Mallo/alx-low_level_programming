#include "main.h"

/**
 * puts2-A function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str:is the input string.
 * Return:there is no return.
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x = x + 2;
	}
	_putchar('\n');
}
