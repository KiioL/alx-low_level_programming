#include <stdio.h>
#include "main.h"

/**
 * _abs - Entry Point
 * Prints absolute value
 * @c: lowercase version of the parameter
 * Return: Always 1 or 0 (success or failure)
 */

int _abs(int c)
{
int x;


if (c < 0)
{
x = -c;
}
else
{
x = c;
}
return (x);
}


