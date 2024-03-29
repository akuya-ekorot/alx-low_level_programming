#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: index to set bit to 1
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1ul << index;
	*n = mask | *n;

	return (1);
}
