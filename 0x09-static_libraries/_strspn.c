#include "main.h"

#include <stddef.h>

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    while (*s != '\0')
    {
        int found = 0;
        for (int i = 0; accept[i] != '\0'; i++)
        {
            if (*s == accept[i])
            {
                found = 1;
                break;
            }
        }
        if (!found)
            break;
        count++;
        s++;
    }
    return count;
}
