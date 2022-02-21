#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: the array
 *@accept: array of bytes
 *Return: the numbers of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i + j] == accept[j])
			{
				count++;
				break;
			}
		}
	}
	if (accept[i] == 0)
		return (0);

	return (count);
}
