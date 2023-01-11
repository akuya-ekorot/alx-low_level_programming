#include "main.h"
#include <stdio.h>

/**
 * main - prints the arguments
 *
 * @argc: no of arguements in @argv
 * @argv: array of pointers to command line arguements
 *
 * Return: Always 0. (Success)
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc ; i++)
		printf("%s\n", *(argv + i));

	return (0);
}
