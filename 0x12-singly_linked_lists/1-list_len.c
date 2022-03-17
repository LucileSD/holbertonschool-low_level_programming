#include "lists.h"
/**
 * list_len - number of elements in a list
 * @h: the head node
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			h = h->next;
			count++;
		}
	}
	return (count);
}
