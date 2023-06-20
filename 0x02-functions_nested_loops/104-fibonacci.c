#include "main.h"

/**
 * print_large_number - Prints a large number
 * @num: The number to print
 */
void print_large_number(unsigned long num)
{
	/* ... your code to print the number ... */
}

/**
 * print_fibonacci - Prints the first 98 Fibonacci numbers
 */
void print_fibonacci(void)
{
	unsigned long fib1 = 1, fib2 = 2, fib3;
	int i;

	print_large_number(fib1);
	print_large_number(fib2);

	for (i = 2; i < 98; i++)
	{
		fib3 = fib1 + fib2;
		print_large_number(fib3);

		fib1 = fib2;
		fib2 = fib3;
	}
}
