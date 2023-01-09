#include "main.h"

/**
* _isdigit - checks for a digit (0 through 9)
* @c: int to check
* Return: 1 if @c is digit, 0 otherwise
*/
int _isdigit(int c)
{
	/* digit characters range from 48 to 57 inclusive in the ascii table */
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
