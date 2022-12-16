#include "main.h"

/*
  *to write an isdigit function
  *which returns 1 when c is a digit
  * returns 0 if not digit
  */

int _isdigit(int c);
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);


}
