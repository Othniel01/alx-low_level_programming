#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b, result;

	if (!(argv[1] && argv[2]))
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;
	printf("%d\n", result);
	return (0);
}
