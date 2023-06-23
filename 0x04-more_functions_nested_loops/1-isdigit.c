#include "main.h"

/**
* _isdigit - checks if c is digit
*
* @c: The character to check
*
* Return: 1 if true
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
