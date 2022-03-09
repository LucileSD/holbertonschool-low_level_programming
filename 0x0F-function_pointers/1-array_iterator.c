#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter on each element of
 * an array
 * @array: the array
 * @size: the size of the array
 * @action: the pointer to the function
 * Return: None
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
		(action)(array[i]);
}
