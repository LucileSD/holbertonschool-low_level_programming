#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a: the pointer on the array
 *@n: the number of bytes
 *
 *Return: None
 */
void reverse_array(int *a, int n)
{
	int end, tmp;

	for (end = 0; end < n; n--, end++)
	{
		tmp = a[end];
		a[end] = a[n - 1];
		a[n - 1] = tmp;
	}
}
