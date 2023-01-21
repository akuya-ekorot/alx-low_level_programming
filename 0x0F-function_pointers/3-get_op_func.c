#include "3-calc.h"

/**
 * get_op_func - returns the appropriate operation function
 *
 * @s: string, operator
 *
 * Return: pointer to the appropriate operation function
*/
int (*get_op_func(char *s))(int a, int b)
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

	i = 0;

	while (ops[i].op)
	{
		if (*s == *(ops[i].op))
			break;
		i++;
	}

	return (ops[i].f);
}
