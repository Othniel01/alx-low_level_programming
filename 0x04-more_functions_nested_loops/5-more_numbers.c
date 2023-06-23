#include "main.h"

/**
* more_numbers - prints more numbers,
* followed by a new line 10 times
*
* Return: void
*/
void more_numbers(void)
{
	int number = 0;
	int i = 0;

	while (i < 10)
	{
		while (number <= 14)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
			number++;
		}
		number = 0;
		i++;
		if (i <= 10)
			_putchar('\n');
	}
}
