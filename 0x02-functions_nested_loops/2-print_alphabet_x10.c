#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet  followed by a new line 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int letter = 'a';
int i = 0;

while (i < 10)
{
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
letter = 'a';
i++;
if (i <= 10)
_putchar('\n');
}
}
