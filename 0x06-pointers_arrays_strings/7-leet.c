#include "main.h"
/**
 *leet - encodes a string into 1337
 *@tab: represent the string
 *Return: tab
 */
char *leet(char *tab)
{
	int l, n;
	char lit[] = "a4A4e3E3o0O0t7T71L1";

	for (l = 0; tab[l] != '\0'; l++)
	{
		for (n = 0; lit[n] != '\0'; n += 2)
		{
			if (tab[l] == lit[n])
			{
				tab[l] = lit[n + 1];
			}
		}
	}
	return (tab);
}
