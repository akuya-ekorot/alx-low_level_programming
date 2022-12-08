#include <stdio.h>

/**
* main - entry point of file
*
* Return: Always 0 (Success)
*
*/
int main(void)
{
	char *p = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; *(p + i) != '\0'; i++)
	{
		putchar(*(p + i));
	}

	putchar('\n');
	return (1);
}
