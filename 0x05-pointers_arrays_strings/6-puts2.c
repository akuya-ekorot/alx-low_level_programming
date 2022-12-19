#include "main.h"

/**
* puts2 - prints every other character of a string starting from the first one,
* followed by a new line
* @str: string to print
*/
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i = i + 2)
	{
		_putchar(*(str + i));
	}
}

