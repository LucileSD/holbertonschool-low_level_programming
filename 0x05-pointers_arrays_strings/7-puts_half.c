#include "main.h"
/**
*puts_half - print the second half of the string
*@str: represent the string
*
*Return: None
*/
void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	len = len + 1;
	len = len / 2;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;

	}
	_putchar('\n');
}
