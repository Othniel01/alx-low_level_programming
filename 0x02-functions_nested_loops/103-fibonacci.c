#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
*
* Return: 0
*/
/* betty style doc for function main goes there */
int main(void)
{
	unsigned long int i = 1, j = 1, temp, sum = 0;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;
		temp = i;
		i = j;
		j = temp + i;
	}
	printf("%ld\n", sum);


	return (0);
}
