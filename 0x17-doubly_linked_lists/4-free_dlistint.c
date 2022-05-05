#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: the first node of the list
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head)
	{
		while (tmp)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}
}
