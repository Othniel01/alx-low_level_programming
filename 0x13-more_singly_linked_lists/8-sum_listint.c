#include "lists.h"

/**
 * sum_listint - Sums up all the data (n) in a listint_t linked list.
 *
 * @head: Pointer to the first node of the list.
 *
 * Return: The sum of all the data.
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
