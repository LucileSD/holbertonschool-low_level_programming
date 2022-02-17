#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *
 *Return: tab
 */
char *string_toupper(char *tab)
{
	int i, len;

	for (len = 0; tab[len] != '\0'; len++)
		;

	for ( i = 0; i < len; i++)
	{
		if (tab[i] >= 97 && tab[i] <= 122)
		{
			tab[i] = tab[i] - 32;
		}
	}
	return (tab);
}
