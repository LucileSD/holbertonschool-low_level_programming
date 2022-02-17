#include "main.h"
/**
 *cap_string - capitalizes all words of a string
 *@tab: represent the array
 *Return: tab
 */
char *cap_string(char *tab)
{
	int l;

	for (l = 0; tab[l] != '\0'; l++)
	{
		if (l == 0)
		{
			if ((tab[l] >= 97 && tab[l] <= 122))
				tab[l] = tab[l] - 32;
			continue;
		}
		else if (tab[l] == ' ' || tab[l] == '.' || tab[l] == '\n' ||
			 tab[l] == '\t' || tab[l] == ',' || tab[l] == ';' ||
			 tab[l] == '!' || tab[l] == '?' || tab[l] == '"' ||
			 tab[l] == '(' || tab[l] == ')' || tab[l] == '{' ||
			 tab[l] == '}')
		{

			if (tab[l + 1] >= 97 && tab[l + 1] <= 122)
			{
				tab[l + 1] = tab[l + 1] - 32;
				continue;
			}
		}
	}
	return (tab);
}
