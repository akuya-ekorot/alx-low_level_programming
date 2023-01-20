#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all it's parameters
 *
 * @n: first parameter
 *
 * Return: Sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
