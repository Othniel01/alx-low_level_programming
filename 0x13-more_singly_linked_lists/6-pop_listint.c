#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - This code goes ahead to delete the head node
 * @head: This work is a double pointer
 *
 * return returns an empty 
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
