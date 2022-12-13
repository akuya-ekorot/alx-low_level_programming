#include "main.h"

/**
* _abs - computes absolute value of an integer
* @n: int. number to check
*
* Return: the absolute value of int
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}

/**
* print_last_digit - prints the last digit of a number
* @n: int. number to check
*
* Return: value of n
*/
int print_last_digit(int n)
{
	int i;

	i = _abs(n % 10);
	_putchar(i + '0');

	return (i);
}
