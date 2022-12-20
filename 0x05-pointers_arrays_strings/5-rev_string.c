#include "main.h"

int _putchar(char c);

/**
 * rev_string - a function that reverses a string.
 * @s: first parameer. a char data type
 */
void rev_string(char *s)
{
	int k = 0;
	int i;
	char ch;


	while (s[k] != '\0')
		k++;

	for (i = k; i >= 0; i--)
	{
		ch =s[i];
		_putchar(ch);
	}

	_putchar('\n');
}
