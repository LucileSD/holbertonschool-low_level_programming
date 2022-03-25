#include "main.h"
/**
 *print_binary -  prints the binary representation of a number
 *@n: the neumber given
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned int j;

	for (i = 10; i >= 0; i--)
	{
		j = n >> i;

		if (j & 1)
			_putchar(1 + '0');
		else
			_putchar(0 + '0');
	}

	_putchar(n & 1);
}
