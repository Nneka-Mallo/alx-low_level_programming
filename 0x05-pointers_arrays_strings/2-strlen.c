#include "main.h"
/**
*int _strlen-A function that finds the length of a string.
*@s:pointer to the string whose length is to be found.
*Return:returns the length of the string.
*/

int _strlen(char *s)
{
	int x = 0;
/*the counter x will incremeant till the last character is NULL,\0*/
	while (*(s + x) != 0)
	{
		x++;
	}
	return (x);
}
