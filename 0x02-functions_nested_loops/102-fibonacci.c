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
	double i = 1, j = 1, temp;
	int l;

	for (l = 0; l < 50; l++)
	{
		if (l != 49)
			printf("%.0f, ", j);
		else
			printf("%.0f\n", j);
		temp = i;
		i = j;
		j = temp + i;
	}



	return (0);
}
