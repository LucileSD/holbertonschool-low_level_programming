#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: None
 */
void times_table(void)
{
	int x, y, result;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			result = x * y;
			if (result < 10)
			{
				if (x != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + 48);
			}
			if (result >= 10)
			{
				_putchar(' ');
				_putchar((result / 10) + 48);
				result = result % 10;
				_putchar(result + 48);
			}
			if (x < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
