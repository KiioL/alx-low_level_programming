#include "holberton.h"

/**
 * _isdigit - Entry point
 * Checks for 0 to 9
 * @c: integer parameter
 * Return: Interger
 */

int _isdigit(int c)
{
int a;

if (c >= 48 && c <= 57)
{
a = 1;
}
else
{
a = 0;
}
return (a);
}
