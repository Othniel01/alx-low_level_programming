#include "lists.h"

/**
 * get_listint_len - Get the number of elements in a linked list
 * @h: Pointer to the head of the linked list
 *
 * Description: This function counts the number of elements (nodes) in
 * a linked list of type listint_t. It traverses the list from the head
 * and increments a counter for each node.
 *
 * Return: The number of nodes in the linked list.
 */
size_t get_listint_len(const listint_t *h)
{
    size_t num_nodes = 0;

    while (h != NULL)
    {
        num_nodes++;
        h = h->next;
    }

    return (num_nodes);
}
