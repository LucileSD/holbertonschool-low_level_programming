#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: the pointer on functions in main
 * Return: the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp || !array || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if ((cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
