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
	unsigned int len = dlistint_len(*h);
	unsigned int count = 0;

	if (idx > len)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == len)
		return (add_dnodeint_end(h, n));

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
		}

		before = tmp->prev;
		tmp->prev = new_node;
		new_node->next = tmp;
		before->next = new_node;
		new_node->prev = before;
	}
	return (new_node);
}
