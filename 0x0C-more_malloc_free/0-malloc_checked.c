#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: integer value for memory size.
 *
 * Return: a pointer to the allocated memory, otherwise normal process
 * termination with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
