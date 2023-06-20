#include "main.h"
/* more headers goes there */
/**
* main - Entry point
*
* Return: 0
*/
/* betty style doc for function main goes there */
int main(void)
{

	int i = 0;
	int result;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
		i++;
	}
	_print_int(result);
	_putchar('\n');

	return (0);
}


/**
* _print_int - prints an integer using putchar
*
* @n: the integer to print
*
* Return: void
*/
void _print_int(int n)
{
	int d; /* digit variable */

	if (n < 0) /* if negative number */
	{
		_putchar('-'); /* print a minus sign */
		n = -n; /* make n positive */
	}
	d = n % 10; /* get the last digit */
	if (n / 10 > 0) /* if there are more digits */
	{
		_print_int(n / 10); /* print the remaining digits recursively */
	}
	_putchar(d + '0'); /* print the last digit */
}
