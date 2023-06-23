#include "main.h"

/**
* print_triangle - prints the triangle of length n, followed by a new line
*
* @size: size of triangle
* Return: void
*/
void print_triangle(int size)
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

		for (i = 1; i <= size; i++)
		{
			if (i < (size - number))
			{
				_putchar(' ');
			}
			else
				_putchar('#');
			if (i == size)
				_putchar('\n');
		}
		number++;
	}
}
