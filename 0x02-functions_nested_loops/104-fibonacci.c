#include <stdio.h>

/**
 * fibonacci_plus - prints the first 98 fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 */
void fibonacci_plus(void)
{
	long int prev, curr, count, temp;
	char print[1024];

	prev = 1;
	curr = 2;

	printf("%ld, ", prev);

	for (count = 0; count < 97; count++)
	{
		if (count == 96)
		{
			sprintf(print, "%ld", curr);
			printf("%s\n", print);
		}
		else
		{
			sprintf(print, "%ld", curr);
			printf("%s, ", print);
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
	fibonacci_plus();
	return (0);
}
