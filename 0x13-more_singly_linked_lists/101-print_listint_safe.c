#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc_list - This reallocates the memory for an array of pointers
 * to the nodes at a linked list.
 *
 * @list: The old list is to append.
 * @size: This is the size of the new list (always one more than the old list).
 * @new: This is a new node to add to the list.
 *
 * This should return
 */
const listint_t **_realloc_list(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];

	newlist[i] = new;
	free(list);

	return (newlist);
}

/**
 * print_listint_safe - Prints a listint_t linked list.
 *
 * @head: Pointer to the start of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}

		num++;
		list = _realloc_list(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	free(list);
	return (num);
}
