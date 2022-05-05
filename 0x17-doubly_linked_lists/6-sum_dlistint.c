#include "lists.h"
/**
 * sum_dlistint -  the sum of all the data (n) of a dlistint_t linked list
 * @head: the first node of the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (!head)
		return (0);

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
