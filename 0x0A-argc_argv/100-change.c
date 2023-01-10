#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_coins - get number of coins for change amount
 *
 * @change: change amount
 *
 * Return: int, number of coins
*/
int get_coins(int change)
{
	int coins;

	coins = 0;

	if (change / 25 != 0 && change >= 25)
	{
		coins += change / 25;
		change = change - (change / 25 * 25);
	}

	if (change / 10 != 0 && change >= 10)
	{
		coins += change / 10;
		change = change - (change / 10 * 10);
	}

	if (change / 5 != 0 && change >= 5)
	{
		coins += change / 5;
		change = change - (change / 5 * 5);
	}

	if (change / 2 != 0 && change >= 2)
	{
		coins += change / 2;
		change = change - (change / 2 * 2);
	}

	if (change == 1)
		coins++;

	return (coins);
}

/**
 * main - prints minimum number of coins to make change for an amount of money
 *
 * @argc: no of arguements in @argv
 * @argv: array of pointers to command line arguements
 *
 * Return: Always 0. (Success)
*/
int main(int argc, char **argv)
{
	int coins, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(*(argv + 1));

	if (change > 0)
	{
		coins = get_coins(change);
		printf("%d\n", coins);
	}
	else
		printf("%d\n", 0);

	return (0);
}
