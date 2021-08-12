#include <stdio.h>
#include "holberton.h"
#include "main.h"

/**
 * print_triangle - Entry point
 * Prints
 * @size: parameter
 * Return: Void
 */

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int z;

for (z = 0; z < size; z++)
{
int x = z + 1;
int y;

for (; x < size; x++)
{
_putchar(32);
}
for (y = 0; y <= z; y++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
