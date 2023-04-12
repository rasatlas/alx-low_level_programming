#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: an array of nmemb elements.
 * @size: byte size of each nmemb array elements.
 *
 * Return: on success pointer to the allocated memory, if nmemb or size is 0,
 * then _calloc returns NULL, if malloc fails, then _calloc returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
