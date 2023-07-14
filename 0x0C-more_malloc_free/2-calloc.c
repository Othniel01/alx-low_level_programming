#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each
 *          and initializes the memory to zero.
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory, or NULL if nmemb or size is 0 or if
 *         malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
        void *ptr;
        unsigned int i;
        char *char_ptr;

        if (nmemb == 0 || size == 0)
                return (NULL);

        ptr = malloc(nmemb * size);
        if (ptr == NULL)
                return (NULL);

        char_ptr = ptr;
        for (i = 0; i < (nmemb * size); i++)
                char_ptr[i] = 0;

        return (ptr);
}
