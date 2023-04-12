#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum array value, inclusive.
 * @max: maximum array value, inclusive.
 *
 * Return: pointer to the newly created array, if min > max return NULL,
 * if malloc fails return NULL
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
