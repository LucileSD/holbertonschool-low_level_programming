#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return:  the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, low = 0, high = size - 1, i;

	if (!array)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
			mid = (low + high) / 2;
			if (value == array[mid])
			{
				return (mid);
			}
			else if (value > array[mid])
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
	}
	return (-1);
}
