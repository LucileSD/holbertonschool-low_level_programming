#include <stdio.h>
/**
 * main - print alphabet with putchar, reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int ch;
	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar (ch);
	}
	putchar('\n');

	return (0);
}
