#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: first node of the list
 * @index: the index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp = *head;

	if (*head)
	{
		while (index > count)
		{
			tmp = tmp->next;
			count++;
		}
		if (tmp->prev)
			tmp->prev->next = tmp->next;
		else
			*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
		free(tmp);

		return (1);
	}
	return (-1);
}
