#include <stdio.h>
/**
* main - 50 first numbers of fibonacci
*
*Return: none
*/
int main(void)
{
	long int i, c, a = 0, b = 1;

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i == 50)
		{
			printf("%d", c);
		}
		printf("%d, ", c);
	}
	return (0);
}
