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
 
_putchar(44);
_putchar(',');
}
else if (n == 0)
{
x = 0;

_putchar(48);
_putchar(',');
}
else
{
x = -1;

_putchar(45);
_putchar(',');
}

return (x);
}


