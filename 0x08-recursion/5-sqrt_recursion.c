#include "main.h"

/**
 * _pow_recursion - returns the value of @x raised to the power of @y
 *
 * @x: base number
 * @y: exponent
 *
 * Return: int, power
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

/**
 * _sqrt - find square root
 *
 * @n: int
 * @i: int
 *
 * Return: square root
*/
int _sqrt(int n, int i)
{
	if (n < 0 || _pow_recursion(i, 2) > n)
		return (-1);

	if (_pow_recursion(i, 2) == n)
		return (i);

	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - return natural square root of a number
 *
 * @n: int, number to find square root for
 *
 * Return: int, square root of @n
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
