#include "main.h"
#include <stdlib.h>

unsigned int _strlen(char *str);

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1, len2, i, j;
    char *concat;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = _strlen(s1);
    len2 = _strlen(s2);

    if (n >= len2)
        n = len2;

    concat = malloc((len1 + n + 1) * sizeof(char));
    if (concat == NULL)
        return NULL;

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    for (j = 0; j < n; j++, i++)
        concat[i] = s2[j];

    concat[i] = '\0';

    return concat;
}

unsigned int _strlen(char *str)
{
    unsigned int len = 0;

    while (str[len] != '\0')
        len++;

    return len;
}
