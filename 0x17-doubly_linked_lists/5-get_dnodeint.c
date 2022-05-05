#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the first node of the list
 * @index: the index of the nth node
 * Return: the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp = head;

	if (!head)
		return (NULL);

	while (count < index)
	{
		tmp = tmp->next;
		count++;
	}

	return (tmp);
}
