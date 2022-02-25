#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds positive numbers
 *@argc: count argument
 *@argv: the array of arguments
 *Return: the result or error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result = 0;

	if (argc > 1)
	{
		for (num1 = 1; num1 < argc; num1++)
		{
			result += atoi(argv[num1]);

			for (num2 = 0; argv[num1][num2] != '\0'; num2++)
			{
				if (argv[num1][num2] < 48 || argv[num1][num2] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		printf("%d\n", result);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
