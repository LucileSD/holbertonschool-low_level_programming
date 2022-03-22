#include "lists.h"
/**
 *sum_listint - the sum of all the data (n) of a listint_t linked list
 *@head: the head of the linked list
 *Return: the sum of int
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;
	while (temp != 0)
	{
		i = temp->n;
		temp = temp->next;
		sum += i;
	}
	return (sum);
}
