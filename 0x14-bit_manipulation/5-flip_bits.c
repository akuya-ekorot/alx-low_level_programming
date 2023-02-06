#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask, flip;
	unsigned int bits;

	mask = 1;
	flip = n ^ m;
	bits = 0;

	while (flip > mask)
		mask <<= 1;

	while (mask)
	{
		if ((mask & flip))
			bits++;
		mask >>= 1;
	}

	return (bits);
}
