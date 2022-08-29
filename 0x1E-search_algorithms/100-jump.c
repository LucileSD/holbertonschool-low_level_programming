#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t start = 0, end = jump, idx;

	if (!array)
		return (-1);

	while (end < size && value > array[end])
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end += jump;
	}

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	for (idx = start; idx <= end && idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
			return (idx);
	}
	return (-1);
}
