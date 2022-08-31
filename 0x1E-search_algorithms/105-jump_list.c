#include "search_algos.h"
/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return:  a pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tmp = list, *low;
	size_t count = 0, jump, index = 0, index_start = 0;

	if (!list || size < 1)
	{
		return (NULL);
	}

	jump = sqrt(size);

	while (tmp->next && value > tmp->n)
	{
		low = tmp;
		count = 0;
		while (tmp->next && count < jump)
		{
			tmp = tmp->next;
			count++;
			index++;
		}
		printf("Value checked at index [%ld] = [%d]\n", index, tmp->n);
		if (index == size - 1)
			index_start = index - jump + 1;
		else
			index_start = index - jump;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", index_start, index);
	printf("Value checked at index [%ld] = [%d]\n", index_start, low->n);
	while (low != tmp && value != low->n)
	{
		if (value == tmp->n)
			return (tmp);
		low = low->next;
		index_start++;
		printf("Value checked at index [%ld] = [%d]\n", index_start, low->n);
		if (value == low->n)
			return (low);
	}

	return (NULL);
}
