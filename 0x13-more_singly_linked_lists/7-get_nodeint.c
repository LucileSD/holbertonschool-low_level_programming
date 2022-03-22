#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@head: the head of the list
 *@index: the index of the node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nnode;
	unsigned int count = 0;

	if (head == 0)
		return (NULL);

	nnode = head;

	while (count != index && nnode != NULL)
	{
		nnode = nnode->next;
		count++;
	}

	return (nnode);
}
