#include "main.h"

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	ulong fib1 = 1, fib2 = 2, fib3;
	int count;

	_putchar('1');
	_putchar(',');
	_putchar(' ');
	_putchar('2');
	_putchar(',');
	_putchar(' ');

	for (count = 3; count <= 98; count++)
	{
		fib3 = fib1 + fib2;
		print_large_number(fib3);

		if (count < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		fib1 = fib2;
		fib2 = fib3;
	}

	_putchar('\n');
}

/**
 * print_large_number - Prints a large number using _putchar
 * @num: The number to be printed
 */
void print_large_number(ulong num)
{
	if (num / 10)
		print_large_number(num / 10);

	_putchar((num % 10) + '0');
}

