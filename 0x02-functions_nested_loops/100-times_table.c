#include "main.h"

/**
* print_times_table - prints the n times table
* @n: int
*/
void print_times_table(int n)
{
	int i, j, k, l;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				k = i * j;
				l = i * (j + 1);

				if (k > 9)
				{
					if (k > 99)
					{
						_putchar((k / 100) + '0');
					}
					_putchar((k / 10) + '0');
				}
				_putchar((k % 10) + '0');

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');

					if (l < 100)
						_putchar(' ');

					if (l < 10)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
