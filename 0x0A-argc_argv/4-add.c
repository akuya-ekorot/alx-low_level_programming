#include "main.h"
#include <stdio.h>

/**
* _atoi - converts a string to an integer
* need to take into acount all the - and + signs before the number
*
* @s: string to convert
*
* Return: integer. 0 if there's no integer
*/
int _atoi(char *s)
{
	int sign, i;
	unsigned int n;

	sign = 1;
	n = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (n > 0 && !(*(s + i) >= '0' && *(s + i) <= '9'))
			break;

		if (*(s + i) >= '0' && *(s + i) <= '9')
			n = (n * 10) + (*(s + i) - '0');

		if (*(s + i) == '-')
			sign = sign * -1;
	}

	return (sign * n);
}

/**
 * main - multiplies two numbers
 *
 * @argc: no of arguements in @argv
 * @argv: array of pointers to command line arguements
 *
 * Return: Always 0. (Success)
*/
int main(int argc, char **argv)
{
	int i, j, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(*(argv + i) + j) != '\0'; j++)
		{
			if (!(*(*(argv + i) + j) >= '0' && *(*(argv + i) + j) <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += _atoi(*(argv + i));
	}

	printf("%d\n", sum);

	return (0);
}
