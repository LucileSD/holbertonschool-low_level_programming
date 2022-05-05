#include "lists.h"
/**
 * dlistint_len - count the number of elements in a linked dlistint_t list
 * @h: the head of the list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int count = 0;

	if (h == NULL)
		return (0);
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);

}
