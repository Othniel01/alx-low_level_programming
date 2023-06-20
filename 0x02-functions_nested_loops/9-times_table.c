#include "main.h"

/**
* times_table - prints times table
*
*
*
*
* Return: void
*/
void times_table(void)
{
int row = 0, col = 0, prod = 0;

while (row <= 9)
{
while (col <= 9)
{
if (col == 0)
{
_putchar('0');
_putchar(',');
}
else
{
prod = col * row;
_putchar(' ');
if (prod > 9)
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
}
else
{
_putchar(' ');
_putchar(prod + '0');
}
if (col != 9)
_putchar(',');
else
_putchar('\n');
}
col++;
}
col = 0;
row++;
}
}
