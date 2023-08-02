#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Double pointer to the head of the list.
 *
 * Return: The integer value stored in the deleted node.
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	start = *head;
	*head = start->next;
	n = start->n;
	free(start);

	return (n);
}
