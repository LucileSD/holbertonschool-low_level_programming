#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *array_range - creates an array of integers
 *@min: beginning of the array
 *@max: end of the array
 *Return: ptr
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; max >= min; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
