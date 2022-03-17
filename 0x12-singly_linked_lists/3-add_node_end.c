#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the first node
 * @str: the string duplicated
 * Return: the adress of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = (list_t *)malloc(sizeof(struct list_s));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = 0;
	new->len = strlen(str);

	temp = *head;
	if (*head != NULL)
	{
		while (temp->next != NULL)
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
