#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers.
 *
 * @a: int pointer two a two dimensional array.
 * @size: size of the two dimensional array.
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sumRight = 0;
	int sumLeft = 0;
	int index;

	for (index = 0; index < (size * size); index += size + 1)
	{
		sumLeft += a[index];
	}

	for (index = size - 1; index < (size * size - 1); index += size - 1)
	{
		sumRight += a[index];
	}

	printf("%d, %d\n", sumLeft, sumRight);
}
