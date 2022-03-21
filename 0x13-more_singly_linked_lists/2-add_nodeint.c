#include "lists.h"
/**
 *add_nodeint - add node at the beginning
 *@head: the head of the list
 *@n: the number
 *Return: the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
