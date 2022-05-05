#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: first node of the list
 * @n: the value in the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = 0;
	new_node->prev = 0;

	if (*head)
	{
		while (tmp->next)
			tmp = tmp->next;

		new_node->prev = tmp;
		tmp->next = new_node;
	}
	else
		(*head) = new_node;

	return (new_node);
}
