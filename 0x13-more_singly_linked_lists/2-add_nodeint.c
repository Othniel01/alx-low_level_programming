#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Insert a new node at the beginning of a listint_t list.
 *
 * @head: Pointer to the head of the list.
 * @n: Integer value to add to the list.
 *
 * Return: Address of the new node or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
