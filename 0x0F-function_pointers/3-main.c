#include "3-calc.h"

/**
 * main - entry point to the program that performs simple operations
 *
 * @argc: number of command line arguements passed when executing the program
 * @argv: pointer to array of command line arguements
 *
 * Return: Always 0 for success
*/
int main(int argc, char *argv[])
{
	f op_func;
	int ans;

	if (argc == 4 && get_op_func(argv[2]))
	{
		op_func = get_op_func(argv[2]);
		ans = op_func(atoi(argv[1]), atoi(argv[3]));

		printf("%d\n", ans);
		return (0);
	}

	printf("Error\n");
	return (0);
}
