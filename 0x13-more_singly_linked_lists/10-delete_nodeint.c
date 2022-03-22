#include "lists.h"
/**
 *delete_nodeint_at_index - deletes the node at index index of a linked list
 *@head: the head of the list
 *@index: index of the node to delete
 *Return: 1 success 0 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp2;
	unsigned int pos;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
	}

	if (index != 0)
	{
		for (pos = 0; pos < index - 1; pos++)
		{
			temp = temp->next;
		}
		temp2 = temp->next;
		temp->next = temp2->next;
		free(temp2);
	}
	return (1);
}
