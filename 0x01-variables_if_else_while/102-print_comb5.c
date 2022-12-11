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

	while (a < 100)
	{
		while (b < 100)
		{
			if (a < b)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');

				if (!(a == 98 && b == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
	b = 0;
	a++;
	}
	putchar('\n');
	return (0);
}
