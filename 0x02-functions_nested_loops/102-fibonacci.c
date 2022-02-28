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

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i == 50)
		{
			printf("%ld", c);
		}
		printf("%ld, ", c);
	}
	printf("\n");
	return (0);
}
