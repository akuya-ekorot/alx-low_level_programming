#include "main.h"

/**
 * main - multiplies two numbers
 *
 * @argc: no of arguements in @argv
 * @argv: array of pointers to command line arguements
 *
 * Return: Always 0. (Success)
*/
int main(int argc, char **argv)
{
	int i;
	char *c = "Error";

	if (argc == 3)
		_putchar(((*argv[1] - '0') * (*argv[2] - '0')) + '0');
	else
		for (i = 0; *(c + i) != '\0'; i++)
			_putchar(*(c + i));

	_putchar('\n');

	return (0);
}
