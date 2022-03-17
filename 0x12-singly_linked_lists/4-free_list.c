#include "lists.h"
/**
 * free_list -
 * @head: the first node
 * Return: None
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	if (head != NULL)
	{
		while (temp != NULL)
		{
			temp = head->next;
			free(head->str);
			free(head);
			head = temp;
		}
	}
}
