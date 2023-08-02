#include "lists.h"

/**
 * sum_listint - This equals to the sum of all the data (n) of a listint_t linked list.
 * YES YES YES
 * @head: This is a pointer to the very first node
 *
 * The return sum all the data
 */
int sum_listint(listint_t *head)
{
	int sumUp = 0;

	while (head != NULL)
	{
		sumUp += head->n;
		head = head->next;
	}
	return (sumUp);
}
