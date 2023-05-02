#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 *
 * @head: head of the list.
 * Return: head node's data, if the linked list is empty return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int nodeData;

	if (!head)
		return (0);
	current = *head;
	if (!current)
		return (0);
	nodeData = current->n;
	*head = current->next;
	free(current);
	return (nodeData);
}
