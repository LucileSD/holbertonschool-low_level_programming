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


	for (i = 0; i < n; i++)
	{

		printf("%d", a[i]);

		if (i + 1 != n)
		{
			printf(", ");
		}
	}

	printf("\n");


}
