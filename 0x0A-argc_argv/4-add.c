#include "main.h"

/**
 * main - entry point & a program that adds positive numbers.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: if no number is passed to the program, print 0, followed by \n,
 * if one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *ptr;

	for (int i = 1; i < argc; i++)
	{
		ptr = argv[i];
		for (int j = 0; ptr[j] != '\0'; j++)
		{
			if (!isdigit(ptr[j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(ptr);
	}
	printf("%i\n", sum);
	return 0;
}

