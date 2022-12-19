#include "main.h"

/**
* puts_half - prints second half of a string, followed by a new line
* if the number of characters is odd, prints the last n characters
* where n = (length_of_string - 1) / 2
*
* @str: string to print
*/
void puts_half(char *str)
{
	int i, len;

	len = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		len++;
	}

	if (len % 2 != 0)
		len++;

	for (i = len / 2; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}

	_putchar('\n');
}
