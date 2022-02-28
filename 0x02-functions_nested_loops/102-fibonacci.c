#include <stdio.h>
/**
* main - 50 first numbers of fibonacci
*
*Return: none
*/
int main(void)
{
	int i;
	long int c, a = 0, b = 1;

	for (i = 3; i <= 53; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%ld, ", c);
	}
	printf("\n");
	return (0);
}
