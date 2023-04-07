#include <stdio.h>

/**
 * main - entry point and a program that prints all arguments it receives.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
