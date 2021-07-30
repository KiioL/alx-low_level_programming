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


if (c < 10)
{
x = c;
_putchar(x);
}
else
{
x = c % 10;
_putchar(x);
}
return (x);
}


