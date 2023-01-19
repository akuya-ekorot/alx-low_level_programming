#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>

typedef int (*f)(int a, int b);

/**
 * struc op - Struc op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	f f;
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
f get_op_func(char *s);


#endif /* CALC_H */
