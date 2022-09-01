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
	listint_t *tmp = list, *low = list;
	size_t count = 0, jump;

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
		}
		printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", low->index,
		   tmp->index);
	printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);
	while (low && value >= low->n)
	{
		if (value == tmp->n)
			return (tmp);
		low = low->next;
		if (low)
		{
			printf("Value checked at index [%ld] = [%d]\n", low->index, low->n);
			if (value == low->n)
				return (low);
		}
	}
	return (NULL);
}
