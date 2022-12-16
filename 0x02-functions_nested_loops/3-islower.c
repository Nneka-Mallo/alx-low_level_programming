#include "main.h"

/**
 * _islower - function to print lower cases as 1 and 0 if upper
 * @c: first parater
 *
 * Return: 1 if lower and 0 if upper
 */

int _islower(int c)
{
	int return_value;

	if(c >= 97 && c <= 122)
		return_value = 1;
	else
		return_value = 0;

	return(return_value);
}
