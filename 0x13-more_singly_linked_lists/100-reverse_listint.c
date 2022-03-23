#include "lists.h"
/**
 *everse_listint - reverses a listint_t linked list
 *@head: the head of the list
 * Return: new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev;

	current = *head;
	prev = 0;

	if (*head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		*head = (*head)->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;

	return (*head);
}
