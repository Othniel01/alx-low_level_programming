#include "lists.h"

/**
 * print_listint - print elements of a linked list
 * @h: pointer to the head of the linked list
 *
 * Description: This function prints all the elements of a linked list of
 * type listint_t. It traverses the list starting from the head and prints
 * the value of each node.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
    size_t num_nodes = 0;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        num_nodes++;
        h = h->next;
    }

    return (num_nodes);
}
