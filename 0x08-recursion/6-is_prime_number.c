#include "main.h"

/**
 * is_prime - finds prime number
 *
 * @n: int, number to check
 * @i: int, iterator
 *
 * Return: int, prime
*/
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime(n, i - 1));
}

/**
 * is_prime_number - returns 1 if @n is an integer
 * otherwise return 0
 *
 * @n: int to check
 *
 * Return: int
*/
int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	return (is_prime(n, n / 2));
}
