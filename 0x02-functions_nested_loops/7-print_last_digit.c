#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry Point
 * Prints last value
 * @c: lowercase version of the parameter
 * Return: Always 1 or 0 (success or failure)
 */

int print_last_digit(int c)
{
int x;


if (c < 10 && c > -1)
{
x = c;
_putchar('0' + x);
}
else if(c < 0)
{
x = - c;
_putchar('0' + x);
}
else
{
x = c % 10;
_putchar('0' + x);
}
return (x);
}


