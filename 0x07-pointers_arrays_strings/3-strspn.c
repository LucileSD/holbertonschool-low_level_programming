#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: the array
 *@accept: array of bytes
 *Return: the numbers of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i; 
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (i = 0; accept[i] != '\0'; i++)
		{			
			if (s[i] == accept[i])
			{
				count++;
				
			}

			else if (s[i] == '\0' || accept[i] == '\0')
				return (count);	
		}
	}

	return (count);
}
