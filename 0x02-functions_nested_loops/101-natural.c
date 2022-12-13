#include "main.h"
#include <stdio.h>

/**
* sum_of_natural - computes & prints the sum of multiples of 3 || 5 below 1024
*/
void sum_of_natural(void)
{
	int i;

	long int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
	}
	printf("%ld\n", sum);
}

/**
* main - entry point to the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
	sum_of_natural();
	return (0);
}
