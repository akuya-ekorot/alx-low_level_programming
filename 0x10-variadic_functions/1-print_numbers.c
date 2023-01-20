#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed into the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);

		if (i != n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}

/**
 * _printnum - prints number
 * @n: number to be printed
 *
 * Return: nothing, void.
 */
void _printnum(int n)
{
	int place;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	place = count_place(n);

	_putchar((n / place) + '0');

	if (place > 1)
	{
		if (n % place >= place / 10)
			_printnum(n % place);
		else
		{
			_putchar('0');
			_printnum(n % (place / 10));
		}
	}
}

/**
 * count_place - finds the decimal places in the number
 * @n: int, number to find decimal places for
 *
 * Return: number of places in the number
 */
int count_place(int n)
{
	if (n < 10)
		return (1);
	return (10 * count_place(n / 10));
}
