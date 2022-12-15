#include "main.h"

/**
* print_diagonal - draws a diagonal line on the terminal
* the diagonal should end with a new line
* if n <= 0 the function should print a new line
*
* @n: number of times '\' should be printed
*/
void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
	{
		_putchar('\n');
	}

	i = 0;

	while (n > 0)
	{
		j = i;
		while (j)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
		i++;
	}
}
