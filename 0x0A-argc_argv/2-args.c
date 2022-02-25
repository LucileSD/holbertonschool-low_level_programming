#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints all arguments it receives
 *@argc: count arguments
 *@argv: the array
 *Return: argv
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
