#include "main.h"
/**
 *_sqrt_recursion - returns the natural square root of a number
 *@n: the number
 *Return: n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 1));
}

/**
 *_sqrt - returns the result
 *@n: the number
 *@y: test the answer
 *Return: y
 */
int _sqrt(int n, int y)
{
	if (y * y == n)
		return (y);
	if (y * y > n)
		return (-1);
	return (_sqrt(n, y + 1));
}
