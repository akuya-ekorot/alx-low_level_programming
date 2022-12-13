#include "main.h"
#include <stdio.h>

/**
* fibonacci_even_sum - prints the sum of the even-valued terms
* followed by a new line
*/
void fibonacci_even_sum(void)
{
	long int prev, curr, count, temp, sum;

	prev = 1;
	curr = 2;
	sum = prev;


	for (count = 0; count < 4000000; count++)
	{
		if (count == 48)
		{
			sum = sum + curr;
		}
		else
		{
			sum = sum + curr;
		}
		temp = curr;
		curr = curr + prev;
		prev = temp;
	}

	printf("%ld\n", sum);
}
