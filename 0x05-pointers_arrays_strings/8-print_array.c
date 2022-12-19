#include "main.h"

/**
* print_array - prints n elements of an array of integers,
* followed by a new line.
* numbers must be seperated by a comma, followed by a space
* numbers should be printed in the same order as they are stored in the array
*
* @n: number of elements in the array
* @a: array of integers
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
