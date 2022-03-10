#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: None
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (!separator)
		return;
	if (va_arg(ptr, char *) == NULL)
		printf("(nil)");

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%s", va_arg(ptr, char *));
		else
			printf("%s%s", separator, va_arg(ptr, char *));
	}
	printf("\n");
	va_end(ptr);
}
