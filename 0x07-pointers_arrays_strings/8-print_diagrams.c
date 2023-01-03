#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 *
 * @a: square matrix
 * @size: size of the matrix
 *
 * Return: Void
*/
void print_diagsums(int *a, int size)
{
	int i, j, sum;

	sum = 0;
	for (i = 0, j = 0; i < size; i++, j += size)
		sum += a[j + i];
	printf("%d, ", sum);

	sum = 0;
	for (i = size - 1, j = 0; i >= 0; i--, j += size)
		sum += a[j + i];
	printf("%d\n", sum);
}
