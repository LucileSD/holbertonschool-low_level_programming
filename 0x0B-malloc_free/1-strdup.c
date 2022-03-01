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
	int size = strlen(str);

	dest = (char *)malloc((size + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		dest[i] = str[i];
	}
	return (dest);
}
