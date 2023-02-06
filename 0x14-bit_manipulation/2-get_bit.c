#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check index of bit
 * @index: the index, starting from 0 of the bit
 *
 * Return: the value of the bit at the index, or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1ul << index;

	return ((mask & n) == 0 ? 0 : 1);
}
