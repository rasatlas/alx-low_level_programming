#include "main.h"

/**
 * main - entry point and a program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 1 if the number of arguments passed is not exactly 1,
 * 0 if the number passed as the argument is negative.
 */

int main(int argc, char *argv[])
{
	int num, index, change;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num = atoi(argv[1]);
	change = 0;

	if (num < 0)
	{
		printf("%i\n", 0);
		return (0);
	}

	for (index = 0; index < 5 && num >= 0; index++)
	{
		while (num >= coins[index])
		{
			change++;
			num -= coins[index];
		}
	}

	printf("%i\n", change);
	return (0);
}
