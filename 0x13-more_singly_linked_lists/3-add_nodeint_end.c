#include "lists.h"
/**
 *add_nodeint_end - adds node at the end
 *@head: the head of the list
 *@n: the number in the node
 *Return: the adresse of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = 0;

	temp = (*head);
	if (*head != NULL)
	{
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	else
	{
		*head = new;
	}

	return (new);
}
