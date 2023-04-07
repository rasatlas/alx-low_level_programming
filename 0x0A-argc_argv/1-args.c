#include <stdio.h>

/**
 * main - entry point and a program that prints the number of
 * arguments passed into it.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
