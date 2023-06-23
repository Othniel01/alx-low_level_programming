#include "main.h"

/**
* print_diagonal - prints the diagonal of length n, followed by a new line
*
* @n: length of line
* Return: void
*/
void print_diagonal(int n)
{
	int number = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (number <= n)
	{
		int i;

		for (i = 1; i <= number; i++)
		{
			if (i == number)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			_putchar(' ');
		}
		number++;
	}
}
