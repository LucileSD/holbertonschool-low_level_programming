#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetic character 1 its true
 * and 0 is false
 * @c: lettre that i choose
 *
 * Return: (0)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
