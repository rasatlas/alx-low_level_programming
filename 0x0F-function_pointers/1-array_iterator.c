#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 *
 * @array: input array.
 * @size: size of the input array.
 * @action: input function to be executed on each element of array array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((size > 0) && action)
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
