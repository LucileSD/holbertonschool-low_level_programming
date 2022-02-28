#include <stdio.h>
/**
* fib - 50 first numbers of fibonacci
*
*Return: none
*/
int main(void)
{
	int i, c, a = 0, b = 1;

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", c);
	}
	return (0);
}
