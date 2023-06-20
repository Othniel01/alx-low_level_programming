#include "main.h"

/**
*jack_bauer - does his thing
*
*
*
*
*Return: 0
*/
void jack_bauer(void)
{
int time = 0;

while (time < 1440)
{
_putchar(((time / 60) / 10) + '0');
_putchar(((time / 60) % 10) + '0');
_putchar(':');
_putchar(((time % 60) / 10) + '0');
_putchar(((time % 60) % 10) + '0');
_putchar('\n');
time++;
}

}
