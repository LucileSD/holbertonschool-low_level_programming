#include "main.h"
/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: the number
 *@index: the index
 *Return: 1 if success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || n == NULL)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
