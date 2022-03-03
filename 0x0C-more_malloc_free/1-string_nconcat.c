#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *@n: the number of letters asked for s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size1, size2, j;
	char *newstr;
	size1 = 0;
	size2 = 0;	

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	newstr = (char *)malloc((size1 + n) * sizeof(char));

	if (newstr == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; i < (size1 + n); i++)
	{

		if (n >= size2)
		{
			n = size2;
		}
		if (i < size1)
		{
			newstr[i] = s1[i];
		}
		else
		{
			newstr[i] = s2[j++];
		}
	}
	newstr[i] = '\0';
	return (newstr);
}
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
