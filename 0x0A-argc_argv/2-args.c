#include "main.h"

/**
 * main - prints the program's name
 *
 * @argc: no of arguements in @argv
 * @argv: array of pointers to command line arguements
 *
 * Return: Always 0. (Success)
*/
int main(int argc, char **argv)
{
	int i, j;

	for (i = 0; i < argc ; i++)
	{
		for (j = 0; *(*(argv + i) + j) != '\0'; j++)
			_putchar(*(*(argv + i) + j));

		_putchar('\n');
	}

	return (0);
}
