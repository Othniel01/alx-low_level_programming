#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - This goes aheads and deletes the head node
 * @head: This now is a double pointer
 *
 * return returns an empty 
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int a;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	a = start->a;
	free(start);
	return (a);
}
