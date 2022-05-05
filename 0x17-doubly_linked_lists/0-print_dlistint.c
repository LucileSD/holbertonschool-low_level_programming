#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head of the list
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int count = 0;
	if (h == NULL)
		return (0);
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
