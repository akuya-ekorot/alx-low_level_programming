#include <stdio.h>

/**
 * main - entry point to the program. prints the name of the file it was
 * compiled from
 *
 *Return: void
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
