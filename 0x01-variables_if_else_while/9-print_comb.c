#include <stdio.h>
/**
 * main - single digit number with putchar and commas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int num;
	for (num = 0; num < 9; num++)
	{
		putchar((num % 10) + '0');
		putchar(',');
	}

	putchar('9');

	putchar('\n');

	return (0);
}
