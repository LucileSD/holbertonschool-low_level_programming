#include <ctype.h>
#include "main.h"
/**
 * _islower - islower
 * @c: lettre i choose
 *
 * Return: (0)
 */
int _islower(int c)
{
	if (islower(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
