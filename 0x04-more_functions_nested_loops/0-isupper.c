#include "holberton.h"

/**
 * _isupper - Entry point
 * Checks for upper case
 * @c: integer parameter
 * Return: Interger
 */

int _isupper(int c)
{
int a;

if (c > 64 && c < 91)
{
a = 1;
}
else
{
a = 0;
}
return (a);
}
