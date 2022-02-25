#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two numbers.
 *@argc: the count
 *@argv: the array
 *Return: the result
 */
int main(int argc, char *argv[])
{
	int num1, num2, result = 0;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
