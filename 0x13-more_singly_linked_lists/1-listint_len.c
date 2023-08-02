#include "lists.h"

/**
 * count_listint - Counts the number of elements in a linked list.
 *
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t count_listint(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        h = h->next;
        count++;
    }

    return count;
}
