#include "main.h"
/**
 *_strlen - returns the length of a string
 *@s: the pointer for the lenght
 *
 *Return: 0
 */
int _strlen(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	return (p);
}
