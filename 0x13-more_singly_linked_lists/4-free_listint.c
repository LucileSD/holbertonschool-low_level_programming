#include "lists.h"
/**
 *free_listint- frees a listint_t list
 *@head: the head of the list
 * Return: None
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head != NULL)
	{
		while (temp != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
	}
}
