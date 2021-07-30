#include <stdio.h>
#include "main.h"

/**
 * print_sign - Entry Point
 * Prints alphabet
 * @c: lowercase version of the parameter
 * Return: Always 1 or 0 (success or failure)
 */

int print_sign(int n)
{
int x;

if (n > 0)
{
x = 1;
 
_putchar(43);
}
else if (n == 0)
{
x = 0;

_putchar(48);
}
else
{
x = -1;

_putchar(45);
}

return (x);
}


