#include "main.h"
/**
 *print_line - draws a straight line in the terminal
 *@n: represent line
 *
 *Return: None
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (  ; n > 0; n--)
		{
			_putchar('_');
		}
	}

	_putchar('\n');

}
