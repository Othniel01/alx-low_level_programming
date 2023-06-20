#include "main.h"
#include <string.h>

#define MAX_DIGITS 100

/**
 * print_large_number - Prints a large number
 * @num: The number to print
 */
void print_large_number(unsigned int *num)
{
	int i;
	int start_printing = 0;

	for (i = MAX_DIGITS - 1; i >= 0; i--)
	{
		if (start_printing || num[i] != 0)
		{
			_putchar(num[i] + '0');
			start_printing = 1;
		}
	}

	if (!start_printing)
		_putchar('0');
}

/**
 * add_numbers - Adds two large numbers
 * @num1: The first number to add
 * @num2: The second number to add
 * @result: The result of the addition
 */
void add_numbers(unsigned int *num1, unsigned int *num2, unsigned int *result)
{
	int carry = 0;
	int i;

	for (i = 0; i < MAX_DIGITS; i++)
	{
		int sum = num1[i] + num2[i] + carry;
		result[i] = sum % 10;
		carry = sum / 10;
	}
}

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned int fib1[MAX_DIGITS] = {0};
	unsigned int fib2[MAX_DIGITS] = {0};
	unsigned int fib3[MAX_DIGITS] = {0};
	int i;

	fib1[MAX_DIGITS - 1] = 1;
	fib2[MAX_DIGITS - 1] = 2;

	print_large_number(fib1);
	_putchar(',');
	_putchar(' ');
	print_large_number(fib2);

	for (i = 2; i < 98; i++)
	{
		add_numbers(fib1, fib2, fib3);

		_putchar(',');
		_putchar(' ');
		print_large_number(fib3);

		memcpy(fib1, fib2, sizeof(fib1));
		memcpy(fib2, fib3, sizeof(fib2));
	}

	_putchar('\n');
}

int main(void)
{
	print_fibonacci();

	return (0);
}

