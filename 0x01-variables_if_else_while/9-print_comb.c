#include <stdio.h>

/**
 * main - entry point to the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');

		if (i == 9)
			break;

		putchar(',');
		putchar(' ');

		i++;
	}

	putchar('\n');
	return (0);
}
