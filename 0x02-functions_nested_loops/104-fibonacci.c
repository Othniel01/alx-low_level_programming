#include "main.h"
#include <string.h>

#define MAX_DIGITS 100

/**
 * print_large_number - Prints a large number
 * @num: The number to print
 */
void print_large_number(unsigned long num)
{
	unsigned long temp = num;
	unsigned int digits[MAX_DIGITS];
	int i = 0;

	while (temp != 0)
	{
		digits[i] = temp % 10;
		temp /= 10;
		i++;
	}

	if (num == 0)
		_putchar('0');

	for (int j = i - 1; j >= 0; j--)
		_putchar(digits[j] + '0');
}

/**
 * add_numbers - Adds two large numbers
 * @num1: The first number to add
 * @num2: The second number to add
 * @result: The result of the addition
 */
void add_numbers(unsigned long *num1, unsigned long *num2, unsigned long *result)
{
	unsigned long carry = 0;

	for (int i = 0; i < MAX_DIGITS; i++)
	{
		unsigned long sum = num1[i] + num2[i] + carry;
		result[i] = sum % 10;
		carry = sum / 10;
	}
}

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned long fib1[MAX_DIGITS] = {0};
	unsigned long fib2[MAX_DIGITS] = {0};
	unsigned long fib3[MAX_DIGITS] = {0};

	fib1[MAX_DIGITS - 1] = 1;
	fib2[MAX_DIGITS - 1] = 2;

	print_large_number(fib1[MAX_DIGITS - 1]);
	_putchar(',');
	_putchar(' ');
	print_large_number(fib2[MAX_DIGITS - 1]);

	for (int i = 2; i < 98; i++)
	{
		add_numbers(fib1, fib2, fib3);

		_putchar(',');
		_putchar(' ');
		print_large_number(fib3[MAX_DIGITS - 1]);

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

