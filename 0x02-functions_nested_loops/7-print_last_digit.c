#include "main.h"
#include <stdlib>
/**
 * print_last_digit - prints the last digit of a number with a
 * function in an header
 *@n: the number
 *
 * Return 0
 */
int print_last_digit(int n)
{
	if (n / 10)
	{
		_putchar(n % 10 + '0');
	}
	return (0);
}
