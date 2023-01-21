#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguements passed to the function
 *
 * Return: Void, nothing
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list ap;
	char *types = "cifs";

	va_start(ap, format);


	va_end(ap);
}
