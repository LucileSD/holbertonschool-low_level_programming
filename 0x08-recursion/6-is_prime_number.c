#include "main.h"
/**
 *is_prime_number - returns if the input is a prime number
 *@n: number
 *-Return; 0 if is false and 1 if is a prime number
 */
 int is_prime_number(int n)
{
	int i = 2;

	if (n <= 2)
		return (0);
	if (n % i == 0)
		return (1);
	if (i * i > n)
		return (1);
	return (is_prime_number(n, i + 1));
}
