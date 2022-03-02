#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup -  returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter
 *@str: the string
 *Return: the pointer
 */
char *_strdup(char *str)
{
	int i;
	char *dest;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = _strlen(str);
	dest = (char *)malloc((size + 1) * sizeof(char));

	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
	return (dest);
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
