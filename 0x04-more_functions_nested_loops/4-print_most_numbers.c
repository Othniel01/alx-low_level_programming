#include "main.h"

/**
* print_most_numbers - prints the numbers, followed by a new line
*
* Return: void
*/
void print_most_numbers(void)
{
	int number = 0;

	while (number < 10)
	{
		if (!(number == 2 || number == 4))
			_putchar(number + '0');
		number++;
	}
	_putchar('\n');
}
