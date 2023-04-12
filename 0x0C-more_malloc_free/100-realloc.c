#include "main.h"
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: If new_size == old_size return ptr, if new_size is equal to zero,
 * and ptr is not NULL, then the call is equivalent to free(ptr) - return NULL
 * otherwise, a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;
	char *ptrCopy, *content;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		if (newPtr == NULL)
			return (NULL);
		return (newPtr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptrCopy = ptr;
	newPtr = malloc(sizeof(*ptrCopy) * new_size);
	if (newPtr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	content = newPtr;
	while ((i < old_size) && (i < new_size))
	{
		content[i++] = *ptrCopy++;
	}
	free(ptr);
	return (newPtr);
}
