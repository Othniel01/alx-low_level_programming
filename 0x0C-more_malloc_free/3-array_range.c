#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array, or NULL if min > max or malloc fails
 */
int *array_range(int min, int max)
{
    int *arr;
    int i, size;

    if (min > max)
        return (NULL);

    size = max - min + 1;
    arr = malloc(sizeof(int) * size);

    if (arr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = min++;

    return (arr);
}

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}

