#include "main.h"
#include <stdlib.h>
/**
 * _abs - computes the absolute value of an integer
 * @j: number choosen
 *
 * Return: 0
 */
int _abs(int j)
{
	if (j >= 0)
	{
		return (j);
	}
	else
	{
		return (j = (-1) * j);
	}
	return (0);
}
