#include "main.h"

/**
 * main - prints the program's name
 *
 * @argc: no of arguements in @argv
 * @argv: array of pointers to command line arguements
 *
 * Return: Always 0. (Success)
*/
int main(int argc, __attribute__((unused)) char **argv)
{
	_putchar((argc - 1) + '0');
	_putchar('\n');

	return (0);
}
