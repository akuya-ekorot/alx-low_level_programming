#include <stdio.h>
#include <math.h>

/**
* prime_factor - finds and prints the largest prime factor of
* the number 612852475143
*/
void prime_factor(void)
{
	unsigned long int factor, num, i;

	num = 612852475143;
	factor = num;

	for (i = 3; i <= sqrt(num); i = i + 2)
	{
		while (num % i == 0)
		{
			factor = i;
			num = num / i;
		}
	}

	printf("%ld\n", factor);
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
