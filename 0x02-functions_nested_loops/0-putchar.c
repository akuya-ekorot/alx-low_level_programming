#include <stdio.h>

/**
* main - entry point to the program. prints "_putchar" followed by a new line.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char *p = "_putchar";

	while (*p != '\0')
	{
		putchar(*p);
		*p++;
	}

	putchar('\n');
	return (0);
}
