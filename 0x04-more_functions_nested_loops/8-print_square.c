#include "main.h"
/**
* print_square - prints a square, followed by a new line
*@size: he size of the square
*
*Return: None
*/
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (y = size; y > 0; y--)
		{
			for (x = size; x > 0; x--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
