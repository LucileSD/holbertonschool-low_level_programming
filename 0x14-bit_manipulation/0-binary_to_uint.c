#include "main.h"
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: pointer to the string
 *Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int mul = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	for (; b[i] != '\0'; i++)
		;
	i--;

	for (; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			sum += mul;
		}
		mul *= 2;
	}
	return (sum);
}
