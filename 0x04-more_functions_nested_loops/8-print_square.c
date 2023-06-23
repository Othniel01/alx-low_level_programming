#include "main.h"

/**
* print_square - prints the square of size size, followed by a new line
*
* @size: of square
* Return: void
*/
void print_square(int size)
{
	int number = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (number < size)
	{
		int i;

		for (i = 0; i <= size; i++)
		{
			if (i == size)
			{
				_putchar('\n');
			}
			else
			_putchar('#');
		}
		number++;
	}
}
