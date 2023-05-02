#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list.
 *
 * @head: head of the linked list.
 *
 * Return: sum of all the data of the linked list,
 * if the list is empty return 0.
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (!head)
		return (0);

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
