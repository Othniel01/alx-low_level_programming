#include "main.h"

/**
* print_line - prints the line of length n, followed by a new line
*
* @n: length of line
* Return: void
*/
void print_line(int n)
{
	int number = 0;

	while (number < n)
	{
		_putchar('_');
		number++;
	}
	_putchar('\n');
}
