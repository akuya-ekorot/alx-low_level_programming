#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: string, name to print out
 * @f: function pointer, function to execute to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && *(f) != NULL)
		(*f)(name);
}
