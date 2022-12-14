#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 *
 * @s: string to print
 *
 * Return: Nothing (void)
*/
void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
		_print_rev_recursion(s + 1);

	if (*s != '\0')
		_putchar(*s);
}
