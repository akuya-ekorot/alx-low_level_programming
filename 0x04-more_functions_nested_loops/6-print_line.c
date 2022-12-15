#include "main.h"

/**
* print_line - draw a straight line in the terminal
* then lines should end with a new line
* if n <= 0, the function should print the new line
* @n: the number of times '_' should be printed
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}
