#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: None
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (!separator && n == 0)
		return;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", va_arg(ptr, int));
		else
			printf("%s%d", separator, va_arg(ptr, int));
	}
	printf("\n");
}
