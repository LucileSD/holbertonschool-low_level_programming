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
	char *arg;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(ptr, char *);
		if (!arg)
			printf("(nil)");
		else
			printf("%s", arg);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
