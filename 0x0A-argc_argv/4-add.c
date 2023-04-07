#include "main.h"

/**
 * main - entry point & a program that adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: if no number is passed to the program, print 0, otherwise 1.
 */

int main(int argc, char  *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isNumber(argv[i]))
			{
				sum += (atoi(argv[i]));
			}
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		printf("%i\n", sum);
		return (0);
	}
	else
	{
		printf("%i\n", 0);
		return (1);
	}

}
