#include <stdio.h>

/**
* main - entry point. Prints all possible combinations
* of two two-digit numbers.
*
* Return: Always 0 (success)
*/
int main(void)
{
	int a = 0, b = 0;
	int c = 0, d = 0;

	while (a < 10)
	{
		while (b < 10)
		{
			while (c < 10)
			{
				while (d < 10)
				{
					if (c > a || d > b)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(' ');
						putchar(c + '0');
						putchar(d + '0');

						!(a == 9 && b == 8) ? putchar(',') : putchar(0);
						!(a == 9 && b == 8) ? putchar(' ') : putchar(0);
					}
					d++;
				}
				d = 0;
				c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
	putchar('\n');
	return (0);
}
