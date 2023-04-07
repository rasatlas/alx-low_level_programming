#include "main.h"

/**
 * main - entry point and a program that prints the minimum number
 * of coins to make change for an amount of money.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 1 if the number of arguments passed is not exactly 1,
 * 0 if the number passed as the argument is negative.
 */

int main(int argc, char *argv[])
{
	int coins = 0;
	int money;

	if (argc == 2)
	{
		if (strchr(argv[argc - 1], '-'))
		{
			printf("0\n");
			return (1);
		}

		money = atoi(argv[argc - 1]);

		while (money > 0)
		{
			if (money % 25 == 0)
			{
				money -= 25;
			} else if (money % 10 == 0)
			{
				money -= 10;
			} else if (money % 5 == 0)
			{
				money -= 5;
			} else if (money % 2 == 0)
			{
				money -= 2;
			} else
			{
				money--;
			}
			coins++;
		}
		printf("%i\n", coins);
		return (0);
	}
	printf("%s\n", "Error");
	return (1);
}
