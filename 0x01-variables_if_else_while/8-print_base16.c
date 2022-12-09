#include <stdio.h>

/**
 * main - entry point to the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char a = 'a';

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}

	while (a < 'g')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
