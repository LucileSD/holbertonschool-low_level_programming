#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: a pointer on char
 * @f: pointer on the function
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
    (*f)(name);
}