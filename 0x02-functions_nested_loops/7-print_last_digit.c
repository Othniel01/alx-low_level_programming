#include "main.h"

/**
* print_last_digit - prints last digit
*
*
*@n: The integer to check
*
*Return: last didigt
*/
int print_last_digit(int n)
{
int last = n % 10;

if (last < 0)
{
last = -last;
}

_putchar(last + '0');

return (last);
}
