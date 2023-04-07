#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point and a program that multiplies two numbers.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 1 always.
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("%s\n", "Error");
	else
		printf("%i\n", ((atoi(argv[1])) * (atoi(argv[2]))));
	return (1);
}
