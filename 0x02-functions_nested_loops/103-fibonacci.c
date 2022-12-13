#include "main.h"
#include <stdio.h>

/**
* fibonacci_even_sum - prints the sum of the even-valued terms
* followed by a new line
*/
void fibonacci_even_sum(void)
{
	long long int prev, curr, count, temp;
	long long int sum;

	prev = 1;
	curr = 2;
	sum = 1;

	for (count = 0; curr < 4000000; count++)
	{
		if (curr % 2 == 0)
			sum = sum + curr;
		temp = curr;
		curr = curr + prev;
		prev = temp;
	}

	printf("%lld\n", sum);
}

/**
* main - starting point of program
*
* Return: Always 0 (success)
*/
int main(void)
{
	fibonacci_even_sum();
	return (0);
}
