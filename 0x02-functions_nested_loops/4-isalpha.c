#include "main.h"

/**
*_isalpha - checks if c is in the alphabet either lowercase or uppercase
*
*@c: The character to check
*
* Return: 1 (true)
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
