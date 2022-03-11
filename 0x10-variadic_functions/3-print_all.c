#include "variadic_functions.h"
/**
 * print_char - print char
 * @ptr: argument
 */
void print_char(va_list ptr)
{
	printf("%c", va_arg(ptr, int));
}
/**
 * print_integer - print int
 * @ptr: argument
 */
void print_integer(va_list ptr)
{
	printf("%d", va_arg(ptr, int));
}
/**
 * print_float - print a number with comma
 * @ptr: argument
 */
void print_float(va_list ptr)
{
	printf("%f", va_arg(ptr, double));
}
/**
 * print_string - print a string
 * @ptr: argument
 */
void print_string(va_list ptr)
{
	char *arg;

	arg = va_arg(ptr, char *);

	!arg ? printf("(nil)") : printf("%s", arg);
}
/**
 * print_all - prints anything
 * @format : a list of types of arguments passed to the function
 * Return: None
 */
void print_all(const char *const format, ...)
{
	_type_t format_of[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}};

	int i = 0;
	int j;
	char *separator = "";
	va_list ptr;

	va_start(ptr, format);
	while (format && format[i] != '\0')
	{
		j = 0;
		while (format_of[j].print && format_of[j].print[0] != format[i])
		{
			j++;
		}
		if (format_of[j].f)
		{
			printf("%s", separator);
			format_of[j].f(ptr);
			separator = ", ";
		}

		i++;
	}
	va_end(ptr);
	printf("\n");
}
