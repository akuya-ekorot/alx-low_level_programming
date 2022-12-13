#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n to 98,
* followed by a new line.
*
* @n: int
*/
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = 0 ; (n - i) >= 98; i++)
		{
			printf("%d", (n - i));

			if ((n - i) != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = 0; (n + i) <= 98; i++)
		{
			printf("%d", (n + i));

			if ((n + i) != 98)
				printf(", ");
		}
	}

	printf("\n");
}
