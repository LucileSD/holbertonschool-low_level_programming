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
	char *s;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		s = va_args(ptr, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator && i < n - 1)
			printf("%s%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
