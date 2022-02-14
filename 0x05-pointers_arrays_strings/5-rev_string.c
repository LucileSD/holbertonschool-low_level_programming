#include "main.h"
/**
*rev_string - function that reverses a string
*@s: reprsent the string
*
*Return: None
*/
void rev_string(char *s)
{
	int lent = 0, forw = 0, rev = 0;
	char tmp;

	while (s[lent] != 0)
	{
		lent++;
	}

	rev = lent - 1;

	while (rev >= lent / 2)
	{
		tmp = s[rev];
		s[rev] = s[forw];
		s[forw] = tmp;
		rev--;
		forw++;
	}
}
