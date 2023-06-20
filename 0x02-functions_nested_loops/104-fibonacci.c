#include "main.h"

/**
 * print_large_number - Prints a large number
 * @num: The number to print
 */
void print_large_number(unsigned long num)
{
	unsigned long temp = num;
	unsigned long rev_num = 0;

	while (temp != 0)
	{
		rev_num = rev_num * 10 + temp % 10;
		temp /= 10;
	}

	while (rev_num != 0)
	{
		_putchar((rev_num % 10) + '0');
		rev_num /= 10;
	}
}

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned long fib1 = 1, fib2 = 2, fib3;

	print_large_number(fib1);
	_putchar(',');
	_putchar(' ');
	print_large_number(fib2);

	for (int i = 2; i < 98; i++)
	{
		fib3 = fib1 + fib2;

		_putchar(',');
		_putchar(' ');
		print_large_number(fib3);

		fib1 = fib2;
		fib2 = fib3;
	}

	_putchar('\n');
}

int main(void)
{
	print_fibonacci();

	return (0);
}

