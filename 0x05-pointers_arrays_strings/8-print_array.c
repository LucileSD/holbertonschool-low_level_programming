#include "main.h"
#include <stdio.h>
/**
 *print_array - a function that prints n elements
 *of an array of integers
 *@a: represent the array
 *@n: reprsent the number of elements
 *
 *Return: None
 */
void print_array(int *a, int n)
{
	int i;

	while (a[n] != '\0')
	{
		n++;
	}

	n = n - 3;

	for (i = 0; i < n - 1; i++)
	{

		printf("%d ,", a[i]);
	}

	printf("%d\n", a[i]);


}
