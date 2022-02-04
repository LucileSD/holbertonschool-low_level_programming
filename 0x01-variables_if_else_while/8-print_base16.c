#include <stdio.h>
/**
 * main - print the base 16 with putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int ch;
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar (ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar (ch);
	}
	putchar ('\n');

	return (0);
}
