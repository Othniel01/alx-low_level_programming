#include "main.h"

/**
* _isupper - checks if c is lowercase
*
* @c: The character to check
*
* Return: 1 if true
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
