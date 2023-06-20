#include "main.h"

/**
* _islower - checks if c is lowercase
*
* at-c: The character to check
*
* Return: 1 if true
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
