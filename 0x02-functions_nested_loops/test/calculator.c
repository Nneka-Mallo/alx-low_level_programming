#include "main.h"


int main(void)
{
	int a;
	int b;
	int result;

	a = 20;
	b = 30;
	result = add(a,b);
	printf("%d + %d  = %d\n", a, b, result);

	result = mul(a,b);
	printf("%d x %d  = %d\n", a, b, result);

	result = sub(a,b);
	printf("%d - %d  = %d\n", a, b, result);

	result = div(a,b);
	printf("%d / %d  = %d\n", a, b, result);

	return (0);
}
