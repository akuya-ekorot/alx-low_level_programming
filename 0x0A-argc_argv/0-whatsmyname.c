#include "main.h"

/**
 * main - prints the program's name
 *
 * @argc: no of arguements in @argv
 * @argv: array of pointers to command line arguements
 *
 * Return: Always 0. (Success)
*/
int main(__attribute__((unused)) int argc, char **argv)
{
	int i;

	for (i = 0; *(argv[0] + i) != '\0'; i++)
		_putchar(*(argv[0] + i));

	_putchar('\n');

	return (0);
}
