#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional
 *array of integers
 *@width: the width of the array
 *@height: the height of the array
 *Return: the pointer on the array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int h, w, count = 0;
	
	arr = (int **)malloc((width * height) * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}

	for (w = 0; w < width; w++)
	{
		for (h = 0; h < height; h++)
		{
			arr[w][h] = count++;
		}
	}
	free(arr);
	return (arr);
}
