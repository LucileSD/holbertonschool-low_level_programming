#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds positive numbers
 *@argc - count argument
 *@argv - the array of arguments
 *Return: the result or error
 */
int main(int argc, char *argv[])
{
	int num, result = 0;


	for (num = 1; num < argc; num++)
	{
		result += atoi(argv[num]);
		printf("%d\n", result);
	}
	if (argc < 3)
	{
		printf("0\n");
	}
	else if ((num >= 65 && num <= 90) || (num >= 97 && num <= 122))
	{
		printf("Error\n");
	}
	return (0);
}
