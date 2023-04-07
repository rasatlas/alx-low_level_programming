#include <stdio.h>

/**
 * main - entry point and a function that prints its name,
 * followed by new line.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc >= 0)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
