#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: the head of the list
 *@n: the new data
 *@idx: index of the place of the new node
 * Return: the adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int pos = 1;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx != 0)
	{
		temp = *head;

		while (temp != NULL && pos < idx)
		{
			temp = temp->next;
			pos++;

			if (temp == NULL)
			{
				return (NULL);
			}
		}

		new->next = temp->next;
		temp->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
