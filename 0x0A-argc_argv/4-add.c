#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry
 *
 * @argc: int
 * @argv: array of strings
 *
 * Return: 0
 *
 *
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!(isNumber(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}


/**
 * isNumber - checks if is number
 *
 * @str: string
 *
 * Return: returns if
 *
 *
 */
int isNumber(char *str)
{

	int j;

	for (j = 0; str[j] != '\0'; j++)
	{

		if (!(isdigit(str[j])))
		{
			return (0);
		}
	}
	return (1);
}
