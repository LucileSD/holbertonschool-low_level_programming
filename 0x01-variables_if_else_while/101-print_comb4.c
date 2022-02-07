#include <stdio.h>
/**
 * main - print 3 digits with no repeat and comas and spaces
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int u, d, c;
	{
		for (c = 48; c <= 55; c++)
		{
			for (d = c + 1; d <= 56; d++)
			{
				for (u = d + 1; u <= 57; u++)
				{
					putchar(c);
					putchar(d);
					putchar(u);
					if (c == 55 && d == 56 && u == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
	return (0);
}
