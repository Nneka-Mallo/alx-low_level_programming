#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - The function is the entry point
 * @void: is the arguement and it returns 0
 *
 * Description: Using betty style doc this is to test my control
 * structure knowledge
 * Return: This returns a 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
