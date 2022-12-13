#include <stdio.h>

/**
 * fibonacci - prints the first 50 fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 */
void fibonacci(void)
{
	long int prev, curr, count, temp;

	prev = 2;
	curr = 3;

	printf("%ld, ", prev);

	for (count = 0; count < 50; count++)
	{
		if (count == 49)
		{
			printf("%ld\n", curr);
		}
		else
		{
			printf("%ld, ", curr);
		}
		temp = curr;
		curr = curr + prev;
		prev = temp;
	}
}

/**
* main - entry point to the program
* Return: Always 0 (Success)
*/
int main(void)
{
	fibonacci();
	return (0);
}
