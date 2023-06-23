#include <stdio.h>
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	unsigned long int number = 612852475143, prime = 2, max = 1;

	while (prime <= number)
	{
		if (number % prime == 0)
		{
			max = prime;
			number = number / prime;
		}
		else
			prime++;
	}
	printf("%lu\n", max);
	return (0);
}
