#include <stdio.h>

/* this code will print a to z in lower cases. */

/**
 * main - This is the main entry to the program
 * @void: the main program takses no argument
 *
 * Desciption: This program prints the alphabets in alphabetical order
 * Return: returns zero
 * ascii_char were used t decode the lowecases
 */
int main(void)
{
	int ascii_char = 97;
	int ascii_CHAR = 65;
	int i = 0;

	while (i < 26)
	{
		putchar (ascii_char + i);
		i++;
	}

	i = 0;
	while (i < 26)
	{
		putchar (ascii_CHAR + i);
		i++;
	}

	putchar ('\n');

	return (0);
}
