#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h: a const list of type list_t.
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t counter;
	const list_t *current;

	current = malloc(sizeof(list_t));
	if (current == NULL)
	{
		printf("Error\n");
		return (1);
	}

	current = h;
	counter = 0;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
		current->str != NULL ? current->str : "(nill)");
		current = current->next;
		counter++;
	}
	return (counter);
}
