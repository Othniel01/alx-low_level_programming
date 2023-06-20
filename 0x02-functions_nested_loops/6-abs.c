#include "main.h"

/**
*_abs - prints without sign
*
*
*
*@n: The integer to check
*
* Return: n without sign
*/
int _abs(int n)
{
int result = n * _print_sign(n);

return (result);

}
/**
*_print_sign - prints sign
*
*@n: the number
* Return: sign
*/
int _print_sign(int n)
{
if (n > 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (0);
}
}
