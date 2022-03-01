#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *Return: s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, c;
	char *str;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	str = (char *)malloc(sizeof(char) * (i + j + 1));

	for (c = 0; c < (i + j); c++)
	{
		if (c < i)
		{
			str[c] = s1[c];
		}
		else
		{
			str[c] = s2[c - i];
		}
	}
	str[c] = '\0';
	return (str);
}

