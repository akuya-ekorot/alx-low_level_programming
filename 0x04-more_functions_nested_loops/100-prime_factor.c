#include <stdio.h>

/**
* prime_factor - finds and prints the largest prime factor of
* the number 612852475143
*/
void prime_factor(void)
{
	unsigned long int factor, num, temp, i, j;

	num = 612852475143;
	temp = num;
	factor = num;
	j = 2;

	for (i = 0; i < num / 2; i++)
	{

		if (temp % j == 0)
		{
			factor = j;
			temp = temp / j;
		}
		else
		{
			j++;
		}
	}

	printf("%ld", factor);
}

/**
* main - check code
* Return: Always 0
*/
int main(void)
{
	prime_factor();
	return (0);
}
