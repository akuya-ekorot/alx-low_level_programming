#include "main.h"

/**
* print_square - prints a sqaure followed by a new line
* if size <= 0, print new line
* @size: size for the square (size by size)
*/
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}

	if (size < 1)
		_putchar('\n');
}
