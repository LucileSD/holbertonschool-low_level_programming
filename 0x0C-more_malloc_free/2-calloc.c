#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - allocates memory for an array
 *@nmemb: number of elements
 *@size: size of the array
 *Return: the pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(unsigned int) * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	for (nmemb = 0; nmemb < size; nmemb++)
		ptr[nmemb] = '\0';

	return (ptr);
}
