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
	while (n > 0)
	{
		_putchar('\\');
		n--;
	}

	_putchar('\n');
}
