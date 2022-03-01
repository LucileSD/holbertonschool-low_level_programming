#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_array - creates an array of chars, and initializes it with a specific char
 *@c: the charactere
 *Return: Null
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned i;

	ptr =(char *)malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
