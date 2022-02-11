#include "main.h"
#include <stdio.h>
/**
 *print_triangle - prints a triangle, followed by a new line
 *@size: the size of the triangle
 *
 *Return: None
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = size; x > 0; x--)
		{
			for (y = x - 1; y > 0; y--)
			{
				_putchar(' ');
			}

			for (z = size - (x - 1); z > 0; z--)
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
