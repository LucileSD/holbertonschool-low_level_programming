#include "main.h"
/**
 *is_prime_number - returns if the input is a prime number
 *@n: number
 *Return: 0 if is false and 1 if is a prime number
 */
int is_prime_number(int n)
{
	int y = _prime(n, 2);

	if (y == n)
		return (1);
	else
		return (0);
}

/**
 *_prime - calculate if prime number or not
 *@n: the number
 *@y: the number which divide n
 *Return: 1 if n is prime number
 */
int _prime(int n, int y)
{
	if (y < n && n % y != 0)
		return (_prime(n, y + 1));
	else
		return (y);
}
