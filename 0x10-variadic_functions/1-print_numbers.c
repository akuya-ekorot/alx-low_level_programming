#include "variadic_functions.h"
#include <stdarg.h>

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
	unsigned int i, j;
	int num;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		_printnum(num);

		if (separator && i != n - 1)
		{
			for (j = 0; *(separator + j) != '\0'; j++)
				_putchar(*(separator + i));
		}
	}

	_putchar('\n');
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
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n > 999 && n < 10000)
	{
		_putchar((n / 1000) % 10 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
	}
	else if (n > 99 && n < 1000)
	{
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
	}
	else if (n > 9 && n < 100)
	{
		_putchar((n / 10) % 10 + '0');
	}
	_putchar(n % 10 + '0');
}
