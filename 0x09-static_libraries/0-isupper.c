#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: int to check
* Return: 1 if @c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
	/* uppercase character range from 65 to 90 inclusive in the ascii table */
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	return (0);
}
