#include "3-calc.h"

/**
 * main - entry point.
 * @argc: argument count.
 * @argv: array of arguments.
 *
 * Return: integer value
 */

int main(int argc, char *argv[])
{
	if (*argv[2] != '+' || *argv[2] != '-' ||
		*argv[2] != '*' || *argv[2] != '/' || *argv[2] != '%')
	{
		printf("%s\n", "Error");
		exit(99);
	}

	if (argc == 4)
	{
		int a, b;
		int (*pfunc)(int, int);

		a = atoi(argv[1]);
		b = atoi(argv[3]);
		pfunc = get_op_func(argv[2]);
		if ((*argv[2] == '%' || *argv[2] == '/') && b == 0)
		{
			printf("%s\n", "Error");
			exit(100);
		}
		printf("%d\n", pfunc(a, b));
		return (0);
	}
	printf("%s\n", "Error");
	exit(98);
}
