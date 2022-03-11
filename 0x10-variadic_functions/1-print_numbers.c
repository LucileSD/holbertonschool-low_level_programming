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

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (i < n)
			printf("%d", va_arg(ptr, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
