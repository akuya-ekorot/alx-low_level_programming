#include "main.h"
#include <stdio.h>

/**
* fibonacci_even_sum - prints the sum of the even-valued terms
* followed by a new line
*/
void fibonacci_even_sum(void)
{
	long int prev, curr, temp;
	long int sum;

	prev = 1;
	curr = 2;
	sum = 0;

	while (curr < 4000000)
	{
		if (curr % 2 == 0)
			sum = sum + curr;
		temp = curr;
		curr = curr + prev;
		prev = temp;
	}

	printf("%ld\n", sum);
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
