#include "main.h"
/**
* print_to_98 - prints all natural numbers from n to 98
*
* @n: the starting number
*
* Return: void
*/
void print_to_98(int n)
{
	int i; /* loop variable */

	if (n <= 98) /* if n is less than or equal to 98 */
	{
		for (i = n; i <= 98; i++) /* loop from n to 98 */
		{
			_print_int(i);
			if (i != 98) /* if not the last number */
			{
				_putchar(','); /* print a comma */
				_putchar(' '); /* print a space */
			}
		}
	}
	else /* if n is greater than 98 */
	{
		for (i = n; i >= 98; i--) /* loop from n to 98 in reverse */
		{
			_print_int(i);
			if (i != 98) /* if not the last number */
			{
				_putchar(','); /* print a comma */
				_putchar(' '); /* print a space */
			}
		}
	}
	_putchar('\n'); /* print a new line */
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
