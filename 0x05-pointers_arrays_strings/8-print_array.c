#include "main.h"

/**
 * print_array - prints an array
 *
 * @a: int array pointer
 * @n: length of array
 *
 */

void print_array(int *a, int n)
{
	int i;

	if (i <= 0)
		break;
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", *a);
			a++;
		}
		printf("%d\n", *a);
	}
}
