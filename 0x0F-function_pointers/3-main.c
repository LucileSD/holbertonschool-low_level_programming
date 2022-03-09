#include "3-calc.h"

/**
 * main - call others function
 * @argv: argument value
 * @argc: argument counter
 * Return: None
 */
int main(int argc, char *argv[])
{
	int num1, num2, result = 0;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
