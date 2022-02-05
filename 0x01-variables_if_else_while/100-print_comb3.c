#include <stdio.h>
/**
 * main - print all possible different
 * combinations of 2 digits with space, commas and putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{int num;
	for (num = 1; num <= 89; num++)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
		if (num == 89)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
