#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
unsigned int _strlen(char *str);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
void *_memcpy(void *dest, const void *src, unsigned int n);
unsigned int _strlen(char *s);
int *array_range(int min, int max);

#endif /* MAIN_H */
