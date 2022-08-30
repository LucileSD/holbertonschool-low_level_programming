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

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t high = 1;
	int low = 0;
	int index;

	if (!array || !value)
		return (-1);

	while (high < size && value > array[high])
	{
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		low = high;
		high *= 2;
	}
	if (high >= size)
		high = size - 1;
	printf("Value found between indexes [%d] and [%ld]\n", low, high);
	index = binary_search(array + low, (high - low) + 1, value);
	return (index == -1 ? index : index + low);
}
