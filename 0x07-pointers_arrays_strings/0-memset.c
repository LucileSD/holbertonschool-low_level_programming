#include "main.h"
/**
 *_memset - fills memory with a constant byte
 *@s: a pointer
 *@b: constant byte
 *@n: number of bytes
 *Return: constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n != 0)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
