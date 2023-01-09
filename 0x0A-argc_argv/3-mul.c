#include "main.h"
#include <stdio.h>

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
	if (argc == 3)
		printf("%d\n", (*argv[1] * *argv[2]));
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
