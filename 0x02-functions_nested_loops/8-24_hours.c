#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Entry Point
 * Prints time
 * @void: lowercase version of the parameter
 * Return: Null
 */

void jack_bauer(void)
{
int x = 0;
int y = 0;

while (x < 25)
{
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
_putchar(58);
x ++;
while(y < 60)
{
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
_putchar('\n');
}
y ++;
}
}


