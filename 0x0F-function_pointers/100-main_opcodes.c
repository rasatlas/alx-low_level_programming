#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point & a program that prints the opcodes of its own main
 * function.
 *
 * @argc: number of arguments.
 * @argv: array of the number of arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int byte, i;
	char *ptr;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte <= 0)
	{
		printf("%s\n", "Error");
		exit(2);
	}

	ptr = __builtin_return_address(0);

	for (i = 0; i < byte; i++)
	{
		if (i == (byte - 1))
		{
			printf("%02hhx\n", ptr[i]);
		}
		printf("%02hhx ", ptr[i]);
	}
	return (0);
}
