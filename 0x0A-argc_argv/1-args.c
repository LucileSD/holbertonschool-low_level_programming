#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the number of arguments
 *@argv : the array
 *@argc : the number of argument
 *Return: argc
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
