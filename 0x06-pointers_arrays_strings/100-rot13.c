#include "main.h"
/**
 *rot13 - encodes a string using rot13
 *@tab: the array
 *Return: tab
 */
char *rot13(char *tab)
{
	int n, l;
	char low[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char upp[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; tab[n] != '\0'; n++)
	{
		for (l = 0; low[l] != '\0'; l++)
		{
			if (tab[n] == low[l])
				
			{
				tab[n] = upp[l];
				break;
			}
		}
	}
	return (tab);
}
