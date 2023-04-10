#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of array to be creatd.
 * @c: special character to initialize array with
 *
 * Return: returns NULL if size = 0, a pointer to the array,
 * or NULL if if fails.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
