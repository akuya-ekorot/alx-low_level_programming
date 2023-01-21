#include "3-calc.h"

/**
 * get_op_func - returns the appropriate operation function
 *
 * @s: string, operator
 *
 * Return: pointer to the appropriate operation function
*/
f get_op_func(char *s)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	if (s)
	{
		i = 0;

		while (ops[i].op != NULL)
		{
			if (*s == *(ops[i].op))
				return (ops[i].f);
			i++;
		}
	}


	return (NULL);
}
