#include "main.h"

/**
 * main - entry point and a program that multiplies two numbers.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: product of two numbers, otherwise 1.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%i\n", ((atoi(argv[1])) * (atoi(argv[2]))));
		return (0);
	}
	else
		return (printf("%s\n", "Error"));
	return (1);
}
