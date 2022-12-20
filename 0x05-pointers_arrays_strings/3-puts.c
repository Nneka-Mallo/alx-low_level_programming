#include "main.h"

/**
*void _puts-This is a function that prints a string, followed by a new line.
*@str:input string.
*Return: no return.
*/
void _puts(char *str)
{
	int i = 0;
	int j = 0;
	char null_char;

	null_char = 'x';

	while (null_char != '\0')
	{
		null_char = str[i];
		i++;
	}
	i -= 1;

	for (j = 0; j < i; j++)
		_putchar(*(str + j));
	_putchar('\n');

}
