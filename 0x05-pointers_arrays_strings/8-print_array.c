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
	int i = 0;

	while (n > 0)
	{
		printf("%i", a[i]);
		i++;
		n--;

		if (n != 0)
			printf(", ");
	}
	printf("\n");
}
