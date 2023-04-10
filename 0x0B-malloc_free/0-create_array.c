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

	while (1)
	{
		ptr = malloc(sizeof(unsigned int) * size);
		if ((ptr == NULL) || (size == 0))
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
				return (ptr);
			}
		}
		return (0);
	}
}
