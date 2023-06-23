#include "main.h"
/**
* print_number - prints an integer using putchar
*
* @n: the integer to print
*
* Return: void
*/
void print_number(int n)
{
	unsigned int en = 0;

	if (n < 0)
	{
		_putchar('0' - 3);
		en = -n;
	}
	else
	{
		en = n;
	}
	if ((en / 10) > 0)
	{
		print_number(en / 10);
	}
	_putchar((en % 10) + '0');
}
