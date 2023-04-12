#include "main.h"

/**
 * malloc_checked(unsigned int b) - a function that allocates memory
 * using malloc.
 *
 * @b: integer value for memory size.
 *
 * Return: a pointer to the allocated memory, otherwise normal process
 * termination with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(unsigned int) * b);
	if (ptr == NULL)
		exit (98);
	return ((void *)ptr);
}
