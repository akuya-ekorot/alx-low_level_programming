#include "main.h"

/**
* _abs - computes absolute value of an integer
* @n: int. number to check
*
* Return: the absolute value of int
*/
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
