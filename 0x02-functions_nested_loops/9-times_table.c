#include "main.h"

/**
* times_table - prints every minute of the day
*/
void times_table(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;										/* current product in the times table */
			l = i * (j + 1);							/* next product in the times table */

			if (k > 9)										/* print both digits of product */
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');

			/* don't print trailing characters for the last product */
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');

				/* add an extra space if the last product is one digit */
				if (l < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
