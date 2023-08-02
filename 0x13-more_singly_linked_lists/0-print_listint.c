#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print all the elements of a linked list.
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const listint_t *head)
{
    size_t num_nodes = 0;
    const listint_t *current_node = head;

    while (current_node != NULL)
    {
        printf("%d\n", current_node->n);
        current_node = current_node->next;
        num_nodes++;
    }

    return (num_nodes);
}
