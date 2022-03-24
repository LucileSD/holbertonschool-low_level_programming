#include "main.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointer to the string
 *Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int val = 0;
	int i;
	unsigned int len;

	len = _strlen(b) - 1;

	if (b == NULL)
		return (0);

	for (i = len; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			val += k;
		}
		k *= 2;
	}
	return (val);
}
/**
 * _strlen - function that returns the length of a string
 * @s: string to returns the length
 * Return: Return the length of the string
 */

int _strlen(const char *s)
{

	int strlen = 0;

	while (s[strlen] != '\0')
		strlen++;

	return (strlen);
}
