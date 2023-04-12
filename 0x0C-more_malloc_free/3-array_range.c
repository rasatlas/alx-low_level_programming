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
	if (min > max)
		return (NULL);
	int *ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		*ptr = min;
		min++;
		ptr++;
	}
	return (ptr);
}
