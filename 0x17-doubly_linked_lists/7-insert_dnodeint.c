#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: the value in the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *before, *tmp = *h;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->next = 0;
	new_node->prev = 0;
	new_node->n = n;

	if (*h)
	{
		while (idx > count)
		{
			tmp = tmp->next;
			count++;
			if (tmp == NULL)
				return (NULL);
		}

		before = tmp->prev;
		tmp->prev = new_node;
		new_node->next = tmp;
		before->next = new_node;
		new_node->prev = before;
	}
	return (new_node);
}
