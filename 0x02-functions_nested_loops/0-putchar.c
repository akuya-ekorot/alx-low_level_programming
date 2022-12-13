#include <stdio.h>

/**
* main - entry point to the program. prints "_putchar" followed by a new line.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char *p = "_putchar";

	for (i = 0; *(p + i) != '\0'; i++)
	{
		putchar(*(p + i));
	}

	putchar('\n');
	return (0);
}
