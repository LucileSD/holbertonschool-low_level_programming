#include <stdio.h>
/**
 * main - print all possible different
 * combinations of 2 digits with space, commas and putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int u, d;

	for (d = 48; d < 57; d++)
	{
		for (u = d + 1; u <= 57; u++)
		{

		putchar(d);
		putchar(u);
			if (d == 56 && u == 57)
			{	putchar('\n');
				break;
			}

			{
			putchar(',');
			putchar(' ');
			}

	}
	}

	return (0);
}
