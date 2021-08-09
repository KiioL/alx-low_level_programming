#include <stdio.h>
#include "holberton.h"

/**
 * print_diagonal - Entry point
 * Prints
 * @n: parameter
 * Return: Void
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int z;

for (z = 0; z < n; z++)
{
int x = 0;

while (x <= z)
{
_putchar(32);
x++;
}
_putchar(92);
_putchar('\n');
}
}
}
