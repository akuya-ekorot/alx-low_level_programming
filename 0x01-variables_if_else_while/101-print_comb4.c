#include <stdio.h>

/**
 * main - entry point to the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 0, k = 0;

	while (i <= 9)
	{
		while (j <= 9)
		{
			while (k <= 9)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if (i == 7 && j == 8 && k == 9)
					{}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');
	return (0);
}
