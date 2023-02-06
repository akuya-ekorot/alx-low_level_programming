#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int, number to print in binary
 *
 * Return: Nothing. Void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;

	mask = 0x8000000000000000;

	while (mask != 0 && (n & mask) == 0)
		mask >>= 1;

	if (mask == 0)
		_putchar('0');

	while (mask != 0)
	{
		_putchar((n & mask) == 0 ? '0' : '1');
		mask >>= 1;
	}
}
