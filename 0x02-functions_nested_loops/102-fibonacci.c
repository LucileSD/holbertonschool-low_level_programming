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

	for (i = 3; i <= 52; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i == 52)
			printf("%d", c);
		printf("%ld, ", c);
	}
	printf("\n");
	return (0);
}
