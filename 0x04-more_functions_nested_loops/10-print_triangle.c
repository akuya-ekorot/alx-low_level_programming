#include "main.h"

/**
* print_triangle - prints a trangle followed by a new line
* if @size <= 0 print new line
* @size: size of triangle to be printed
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int counter, space, triangle;

		for (counter = 0; counter < size; counter++)
		{
			space = (size - 1) - counter;
			triangle = size - space;

			while (space)
			{
				_putchar(' ');
				space--;
			}

			while (triangle)
			{
				_putchar('#');
				triangle--;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
