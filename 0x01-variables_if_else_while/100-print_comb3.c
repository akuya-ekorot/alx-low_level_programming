#include <stdio.h>

/**
 * main - entry point to the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 0;

	while (i <= 9)
	{
		while (j <= 9)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i == 8 && j == 9)
				{
					/* jibambe msee */
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = 0;
		i++;
	}

	putchar('\n');
	return (0);
}

