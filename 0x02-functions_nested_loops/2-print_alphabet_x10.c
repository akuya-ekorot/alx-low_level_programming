#include "main.h"

/**
* print_alphabet - Prints the alphabet in lowercase, followed by a new line.
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}

/**
* print_alphabet_x10 - Prints the alphabet 10 times in lowercase,
* followed by a new line.
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
