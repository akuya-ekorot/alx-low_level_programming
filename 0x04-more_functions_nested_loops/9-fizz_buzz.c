#include <stdio.h>

/**
* fizz_buzz - prints numbers from 0 to 100 followed by a new line
* for multiples of 3 print Fizz
* for multiples of 5 print Buzz
* for multiples of both 5 and 3 print FizzBuzz
*/
void fizz_buzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");

			if (i != 100)
				printf(" ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	printf("\n");
}

/**
* main - runs fizz_buzz
* Return: Always 0
*/
int main(void)
{
	fizz_buzz();
	return (0);
}
