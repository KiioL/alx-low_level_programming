#include <stdio.h>
#include "holberton.h"

/**
 * _islower - Entry Point
 * Prints alphabet
 * Return: c
 */

int _islower(int c)
{
int x;

if (c > 96 && c < 123)
{x = 1; }
else if (c > 64 && c < 91)
{x = 0; }
else
{x = 0; }
return (x);
}


