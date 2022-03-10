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
	char *letter;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		letter = va_arg(ptr, char *);
		if (letter)
			printf("%s", letter);
		else
			printf("(nil)");
		if (separator && i - 1)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
