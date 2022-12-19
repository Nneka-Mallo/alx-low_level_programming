#include "main.h"

/**
*void _puts-This is a function that prints a string, followed by a new line.
*@str:input string.
*Return: no return.
*/
void _puts(char *str);
int x = 0;

	while (x >= 0)
	{
	if (str[x] == '\0')
	{
	_putchar('\n');
	break;
	}
	_putchar(str[x]);
	x++;
	}
}
