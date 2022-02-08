#include <stdio.h>
#include "main.h"
/**
 * main - print putchar without printf
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
