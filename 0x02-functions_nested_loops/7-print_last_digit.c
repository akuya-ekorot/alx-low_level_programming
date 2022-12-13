#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: int. number to check
*
* Return: value of n
*/
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	_putchar(i + '0');

	return (i);
}
